#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale (LC_ALL, "Portuguese");
int resposta;
int menu;

	printf("Você deseja calcular a area de um espaço? (1 para sim, e 2 para não): ");
	scanf("%d", &resposta);
	if (resposta == 1)   
	{
			
		printf("\n  Quadrado   - 1");
		printf("\n  Triângulo  - 2");
		printf("\n  Cilindro   - 3");
		printf("\n  Selecione qual forma geométrica você deseja calcular a area: ");
		scanf("%d", &menu);
		
		switch (menu)
		{
		   case 1:
		   	
		   	float ladoaq, ladobq, resultadoq;
		   	
		     printf("\nDigite a area de um dos lados do quadrado: ");
		     scanf("%f", &ladoaq);
		     printf("\nDigite a area do outro lado do quadrado: ");
		     scanf("%f", &ladobq);
		     
		     resultadoq = ladoaq * ladobq; 
		     
		     printf("\nA area do quadrado é: %.2f", resultadoq);          
		   break;
		
		   case 2:
		     
		     float baset, alturat, resultadot;
		     
			 printf("\nDigite o valor da base do triangulo: ");
		     scanf("%f", &baset);
		     printf("\nDigite o valor da altura do triangulo: ");
		     scanf("%f", &alturat);
		     
		     resultadot = (baset * alturat)/2;
		     
			 printf("\nA area do triangulo é: %.2f", resultadot); 
		   break;
		    
		   case 3:
		    
		    float raioc, resultadoc;
		    
			 printf("\nDigite o valor do raio do cilindro: ");
		     scanf("%f", &raioc);
		     
		     resultadoc = (raioc * raioc)*3.14;

			 printf("\nA area do cilindro é: %.2f", resultadoc); 
		   break;
		
		   default:
		   	
		     printf("\nAlternativa inválida");
	   }
	}
	else
	{
		printf("\n\nFechando o programa.");
	}


}
