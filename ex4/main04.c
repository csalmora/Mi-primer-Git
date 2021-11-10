#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
int *ptrNum1;
int *ptrNum2;
int resultado;
int resto;
int num1;
int num2;
num1 = 10;
num2 = 3;

ptrNum1 = &num1;
ptrNum2 = &num2;


ft_ultimate_div_mod(ptrNum1, ptrNum2);

}
