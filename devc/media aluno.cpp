#include <stdio.h>
#include <locale.h>



//fun��o
float media_aluno (float n1, float n2, float n3){
float media;

media = (n1 + n2 + n3)/3;

return media;
}

int main () {

	float n1, n2, n3;
	float maluno;
	
	setlocale (LC_ALL, "Portuguese");
	char nome[999];
	
	printf("Escreva o Nome do Aluno: ");
	scanf("%s", nome);
	
	printf("\nCaso seja uma nota de valor decimal, usar v�rgula para representar.");
	printf("\nEscreva a nota da primeira prova: ");
	scanf("%f", &n1);
	
	printf("\nEscreva a nota da segunda prova: ");
	scanf("%f", &n2);
	
	printf("\nEscreva a nota da terceira prova: ");
	scanf("%f", &n3);
	
	maluno = media_aluno(n1, n2, n3);

	if (maluno >= 7)
	{
			
		printf("O Aluno(a) %s foi aprovado(a) com m�dia: %.2f", nome, maluno);		

	} 	
	else
	{
	 	
		if (maluno < 7 && maluno >= 5)
		{
					
		printf("O Aluno(a) %s est� de recupera��o com m�dia: %.2f", nome, maluno);	
			
		}		
		else
		{
					
		printf("O Aluno(a) %s foi reprovado com m�dia: %.2f", nome, maluno);	
			
		}
	
	
		
	}

return 0;
}
