#include <unistd.h>

void ft_is_negative( char numero){	

	if (numero >= 0){
		write(1,"P",1);
	}else {
		write(1, "N" ,1);}
}
