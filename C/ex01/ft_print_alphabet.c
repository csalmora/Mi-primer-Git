#include<stdio.h>

void ft_print_alphabet( char letra ){
 
	letra= 'a';

	do{
		printf("%c" ,letra );
		letra++;
	} while(letra <= 'z');
 
	

}
