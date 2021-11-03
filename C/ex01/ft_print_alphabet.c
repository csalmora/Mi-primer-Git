#include<unistd.h>

void ft_print_alphabet( char letra ){
  
	do{
		write(1 ,&letra,1 );
		letra++;
	} while(letra <= 'z');
 
	

}
