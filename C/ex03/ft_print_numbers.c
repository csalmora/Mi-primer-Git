#include <unistd.h>

void ft_print_numbers( char numero){

	do{
    	write(1 , &numero, 1);
		numero++;
	} while (numero <= '9');
}
