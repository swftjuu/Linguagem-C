#include <stdio.h>
#include <stdlib.h>
int main ()

{
	float pre, preco_t, preco_t2;
	
	printf ("Qual o valor do produto comprado?");
	scanf ("%f", &pre);
	
	if (pre > 20)
	{
		preco_t = pre + (pre/20)*9 ;
		printf ("\n Seu lucro e de 45%, totalizando: %.2f", preco_t);
		
	}
	else
	{
		preco_t = pre + (pre/20)*6;
		printf ("\n Seu lucro e de 30%, totalizando: %.2f", preco_t2);
		
	}
	
	return 0;
}