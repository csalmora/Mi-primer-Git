#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int num1 = *a;  
	int num2 = *b; 
    
	*a = num1 / num2;
	*b = num1 % num2;
	printf("%d\n", *a);
	printf("%d\n", *b);
}
