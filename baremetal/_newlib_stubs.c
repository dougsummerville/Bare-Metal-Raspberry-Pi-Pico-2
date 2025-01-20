/* Baremetal startup code for the Raspberry Pi Pico 2
 *
 * Based on examples in Newlib documentation at https://sourceware.org/newlib
 *
 * Copyright (c) 2025 Douglas H. Summerville, Binghamton University 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <sys/stat.h>
#include <sys/times.h>
#include <sys/unistd.h>

#include <errno.h>
#undef errno
int errno;

#ifndef MIN_STACK_REMAINING
#define MIN_STACK_REMAINING 1024
#endif

extern int (*_stdout_putchar)( char c );
extern int (*_stdin_getchar)( char *c );

char *__env[1] = { 0 };
char **environ = __env;

int _write(int handle, char *buf, int len) ;
int _read(int handle, char *buffer, int length);
void _exit(int unused_arg);
int _close(int unused_arg);
int _execve(char *name, char **argv, char **env);
int _fork(void);
int _fstat(int fd, struct stat *st);
int _getpid();
int _isatty(int fd);
int _kill(int pid, int sig);
int _link(char *old, char *new);
int _lseek(int file, int ptr, int dir);
caddr_t _sbrk(int incr);
int _stat(const char *file, struct stat *st);
clock_t _times(struct tms *buf);
int _unlink(char *fname);
int _wait(int *status);

//Assume STDOUT/STDERR are same and non-blocking
int _write(int handle, char *buf, int len) 
{
	if( len == 0)
		return 0;

	int retval = -1;

	if( handle == 0 || handle > 2 ){
		errno = EBADF;
	} else {
		while( len-- ){
			if( _stdout_putchar && _stdout_putchar(*buf++) ){
				retval = (retval==-1) ? 1 : retval+1;
			}else{
				if( retval == -1 )
					errno = EAGAIN;
				break;
			}
		}
	}
	return retval;
}
int _read(int handle, char *buf, int len)
{
	if( len == 0)
		return 0;

	int retval = -1;
	if( handle != 0 ){
		errno = EBADF;
	} else {
		while( len-- ){
			if( _stdin_getchar && _stdin_getchar(buf++) ){
				retval = (retval==-1) ? 1 : retval+1;
			}else{
				if( retval == -1 )
					errno = EAGAIN;
				break;
			}
		}
	}
	return retval;
}

void _exit(int unused_arg)
{
	_write(2, "exit\n", 5);
	while (1){
		__asm__("WFI");
	}
}

int _close(int unused_arg)
{
	return -1;
}

int _execve(char *name, char **argv, char **env)
{
	errno = ENOMEM;
	return -1;
}

int _fork(void)
{
	errno = EAGAIN;
	return -1;
}

int _fstat(int fd, struct stat *st)
{
	st->st_mode = S_IFCHR;
	return 0;
}

int _getpid()
{
	return 0;
}

int _isatty(int fd) 
{
		return 1;
}

int _kill(int pid, int sig)
{
	errno = EINVAL;
	return -1;
}

int _link(char *old, char *new)
{
	errno = EMLINK;
	return -1;
}

int _lseek(int file, int ptr, int dir)
{
	return 0;
}

/*Does not check for stack collision*/
caddr_t _sbrk(int incr)
{
	extern char __end;
	static char *heap_end=0;
	uint32_t stack_ptr;
	char *prev_heap_end;

	if (heap_end == 0) {
		heap_end = &__end;
	}
	prev_heap_end = heap_end;
	__asm__ volatile ("MRS %0, MSP" : "=r" (stack_ptr) );
	
	if( (void *)(prev_heap_end + incr) > (void *)(stack_ptr - MIN_STACK_REMAINING) )
	{
		errno = ENOMEM;
		return (caddr_t) -1;
	}
	heap_end += incr;
	return (caddr_t) prev_heap_end;

}

int _stat(const char *file, struct stat *st)
{
	st->st_mode = S_IFCHR;
	return 0;
}

clock_t _times(struct tms *buf)
{
	return -1;
}

int _unlink(char *fname)
{
	errno = ENOENT;
	return -1;
}

int _wait(int *status)
{
	errno = ECHILD;
	return -1;
}

