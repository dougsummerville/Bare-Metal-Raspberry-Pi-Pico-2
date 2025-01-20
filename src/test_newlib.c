#include <stdio.h>
#include <stdlib.h>
#include <usbcdc.h>
#include <assert.h>

int (* _stdin_getchar)( char *c) = usbcdc_getchar;
int (* _stdout_putchar)( char c) = usbcdc_putchar;

unsigned debug1;
unsigned debug2;
unsigned debug3;
unsigned debug4;
void main()
{
	static char *ptrs[1024];
	unsigned idx=0;

	__asm__ volatile ("cpsid i");
	configure_usbcdc();
	__asm__ volatile ("cpsie i");

	while(getchar() == -1);
	puts("Hit any key to continue...\n\r");
	printf("printf works\n\r");

	char c;
	while( -1 == (c=getchar()) )
		continue;

	srand(c);
	puts("\n\rTesting malloc\n\r");
	while(1){
		ptrs[idx]=malloc(1024);
		if( ptrs[idx] > (char *)NULL ){
			idx++;
		}else{
			printf("Allocated %d 1kB Blocks\n\r", idx);
			if( idx != 0 ){
				printf("Last addr: %x \n\r", (unsigned)ptrs[idx-1]);
				puts("Freeing memory");
				do{
					idx--;
					free(ptrs[idx]);
				}while(idx);
			}
			break;
		}
	}
	while(1){
		ptrs[idx]=malloc(1024);
		if( ptrs[idx] != (char *)NULL ){
			idx++;
		}else{
			printf("Allocated %d 1kB Blocks\n\r", idx);
			if( idx != 0 ){
				printf("Last addr: %x \n\r", (unsigned)ptrs[idx-1]);
				puts("Freeing memory");
				do{
					idx--;
					free(ptrs[idx]);
					ptrs[idx]=(char *)NULL;
				}while(idx);
			}
			break;
		}
	}
	unsigned count=0;
	while(1){
		idx=rand()%256;
		if( ptrs[idx] != (char *)NULL ){
			free(ptrs[idx]);
			ptrs[idx]=0;
		}
		else{
			count++;
			ptrs[idx]=malloc(1024+rand()%4095 + 1);
			if( ptrs[idx] <= (char *)NULL )
				break;
		}
	}
	printf("Allocated %d Random Blocks\n\r", count);
	for( idx=0; idx<1024; idx++ ){
		if( ptrs[idx] != 0 ){
			free(ptrs[idx]);
			ptrs[idx]=0;
		}
	}
	puts("Successful completion of tests.  Expect an assert next.\n\r");
	assert( 0 == 1 );
}
