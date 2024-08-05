#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num, num2, x;
	printf ("Digite o seu primeiro numero inteiro: \n");
	scanf ("%d", &num);
	printf ("Digite seu segundo numero inteiro: \n");
	scanf ("%d", &num2);
	
	x= num + num2 ;
	
	if (x>=50)
	{
		printf ("\n Seu numero e igual ou maior que 50, que e %d\n", x);
	}
	
	else
	{
	    printf ("\n Seu numero e invalido");
	}
	
	return 0;
}