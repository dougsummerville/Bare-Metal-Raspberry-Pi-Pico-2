#include <stdio.h>
#include <stdlib.h>
#include <usbcdc.h>

int (* _stdin_getchar)( char *c) = usbcdc_getchar;
int (* _stdout_putchar)( char c) = usbcdc_putchar;

void main()
{
	char *ptrs[1024];
	unsigned idx=0;
	configure_usbcdc();
	while(getchar() != 'a');
	//Allocate 1kB Blocks until error
	puts("Hit any key to continue...");
	while( 255 == getchar() )
		continue;
	puts("\n\rTesting malloc\n\r");
	while(0){
		ptrs[idx]=malloc(1024);
		if( ptrs[idx] != (void *)-1 ){
			idx++;
		}else{
			printf("Allocated %d 1kB Blocks\n\r", idx);
			if( idx != 0 ){
				printf("Last addr: %x \n\r", (unsigned)ptrs[idx-1]);
			}
			puts("Freeing memory");
			do{
				idx--;
				free(ptrs[idx]);
			}while(idx);
		}
	}
}
