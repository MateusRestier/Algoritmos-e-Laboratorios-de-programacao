#include <stdio.h>
#include <locale.h>



//fun��o

bool n_primo (int possibilidades) 
{
		
	int divisores = 0;
	bool booleana;
	
	for (int n=1;n<=possibilidades;n++)
	{
	
		if (possibilidades%n==0)
		{
		
			divisores++;	
			
		}
			
		
	}	
	
	if (divisores==2)
	{	
		booleana = true;		
	}
	else
	{
		booleana = false;	
	}
	
	return booleana;
}



int main () {
	setlocale (LC_ALL, "Portuguese");

	int n;
	bool resultado;


	printf("Digite o n�mero, se for primo exibir� VERDADEIRO se n�o, FALSO: ");
	scanf("%d", &n);

	resultado = n_primo(n);

	if (resultado == true)
	{
		printf ("\nVerdadeiro");		
	}
	else
	{
		printf("\nFalso");
	}
	

return 0;
}
