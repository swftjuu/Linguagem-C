#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()

{ 

SetConsoleOutputCP(CP_UTF8);


int t_empresa;
float salario, salarioaumento;

printf ("Digite seu tempo de empresa:");
scanf ("%d", &t_empresa);
printf ("Digite seu salario:");
scanf ("%d", &salario);

if (t_empresa<5 && salario<2000)
{
printf ("Reajuste de 20% no salario"); 
salarioaumento = salario+(salario/10*2);
printf ("O seu salario sera %.2f", salarioaumento);
}  

else if (t_empresa>5 && t_empresa<10)
{ 
printf ("Reajuste de 15% no salario");
salarioaumento= salario+(salario/10/2*3);
printf ("O seu salario sera de %.2f", salarioaumento);	
}

else if (t_empresa>10 && < 15)
{
printf ("Reajuste de 5%");
salarioaumento= salario+(salario/10/2);
printf ("O seu salario sera de %.2f", salarioaumento);
}

else
 { printf ("Nao tera reajuste"); }
 
 
 
 return 0;

}