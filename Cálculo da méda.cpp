#include <stdio.h>
int main (){ 

int A, B, C, media, soma, menor, resultado;

printf ("Digite a primeira nota");
scanf ("%d", &A);
printf ("Digite a segunda nota");
scanf ("%d", &B);
printf ("Digite a terceira nota");
scanf ("%d", &C);

soma = A + B + C;
media = soma /3;


if (media <= 4){
	printf ("Recuperacao %d", media);
	}
	
else if (media <= 5){
	printf ("Progressao parcial %d", media);
	}

 if  (media <= 6){
	printf ("Aprovado! %d", media);
	}
	
	return 0;
}