#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);


int	main(void)
{
	int *mod;
	int *div;
	int a;
	int b;
	a= -795;
	b= -432;
	
	int resultado;
	int resto;
	div = &resultado;
	mod = &resto;
	
	ft_div_mod(a, b, div, mod);

	printf("%d\n", resultado);
	printf("%d\n", resto);
}

