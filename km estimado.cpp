#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int km, cons, A, B, C;
	char tipo;
	printf ("Informe o seu tipo de carro");
	printf ("[A]");
	printf ("[B]");
	printf ("[C]");
	scanf ("%s", &tipo);
	printf ("\n Agora, informe o percurso rodado em km");
	scanf ("%d", &km);
	
	switch (tipo)
	{case 'A':
		cons = km * 8;
		printf ("O seu consumo estimado e %d\n", cons);
		break;
		
		case 'B':
			cons= km * 9;
			printf ("O seu consumo estimado e %d\n", cons);
			break;
			
			case 'C':
				cons= km * 12;
				printf ("O seu consumo estimado e %d\n", cons);
				break;
				
				default: 
				printf ("escolha uma opcao correta");
				break;
				
}
	
	return 0;
}