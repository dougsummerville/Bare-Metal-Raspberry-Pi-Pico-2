#include <led.h>

int main ( void )
{
configure_led();
    long unsigned i;
    turn_on_led();
	while(1){
	for( i=0; i<2000000; i++);
	toggle_led();
	}
    return(0);
}
