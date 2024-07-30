#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma_prog (int numero1, int numero2)
{
	
int cont, r = 0;	
	
for(cont=1; cont<= numero1; cont++)
{
	
	r += numero2;
}	
return r;
}


int main()
{
 	setlocale (LC_ALL, "Portuguese");
 	int numero1, numero2;
	int resoma;
	int r;
	
	
	printf ("Digite dois valores para serem multiplicados utilizando a soma progressiva: ");
	printf ("\nPrimeiro valor: ");
	scanf ("%d", &numero1);
	printf ("\nSegundo valor: ");
	scanf ("%d", &numero2);
	
	resoma = soma_prog(numero1, numero2);
	
	printf("\n%d multiplicado por %d pela soma progressiva tem como resultado %d\n\n", numero1, numero2, resoma);
	
	return 0;
}



