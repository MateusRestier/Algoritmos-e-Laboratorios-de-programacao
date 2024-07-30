#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>


//funções



//1

float media_aluno (float n1, float n2, float n3)
{
	float media;
	
	media = (n1 + n2 + n3)/3;
	
	return media;
}

//2

char* nometriangulos (int ladoa, int ladob, int ladoc)
{
	
	char* tipo;	
		
	if (ladoa == ladob && ladob == ladoc)
	{
	   tipo = "Equilátero";	
	}
	else
	{
		if (ladoa != ladob && ladob != ladoc)
		{
			tipo = "Escaleno";
		}
	    else
	    {
	    	tipo = "Isósceles";
	    }
	}		
return tipo;
}


//3

float funcao_imposto (float renda_anual, int dependentes)
{
	float renda_liquida;
	float aliquota;
	float desconto;
	desconto=dependentes*600;
	renda_liquida=renda_anual-desconto;
	if(renda_liquida>=10000 && renda_liquida<=30000)
	{
		aliquota=(renda_liquida*5)/100;
		renda_liquida=renda_anual-aliquota;
	}
	else
	{
		if(renda_liquida>30000 && renda_liquida<60000)
		{
			aliquota=(renda_liquida*10)/100;
			renda_liquida=renda_anual-aliquota;
		}
		else
		{
			if(renda_liquida>=60000)
			{
				aliquota=(renda_liquida*15)/100;
				renda_liquida=renda_anual-aliquota;
			}
		}
	}
	
	return renda_liquida;
}

//4

float volume_cone (float raiocone, float alturacone)
{
	
	float pi;
	float volumecone, ptraio;
	pi = 3,14;	
	ptraio = raiocone * raiocone;
		
	volumecone = (pi * ptraio * alturacone)/3;
		
	
	return volumecone;	
}

//5

float volume_piramide (float aresta, float altura)
{
	float volume;
		
	volume = aresta * altura;	
	
		
	return volume;
}


//6

int soma_prog (int numero1, int numero2)
{
	
	int cont, r = 0;	
	
	for(cont=1; cont<= numero1; cont++)
	{
	
	r += numero2;
	}	
	return r;
}

//7

char* restaurante (int nvezes){
	
	char* status;
	int menos10=0, entre10e15=0, acimade15=0;
	
	if (nvezes < 10 && nvezes != -1)
	{	
	status = "menos10";
	}
	else
	{

		if (nvezes >= 10 && nvezes <= 15)
		{						
			status = "entre10e15";
		}
		else
		{
			
			if (nvezes > 15)
			{
			status = "acimade15";
			}
			
		}

	}   	
	
	
	
	return status;
}

//8

//9

int fatorial (int n) {
    int i, f = 1;
    for (i=1; i<=n; i++)
        f = f*i;
    return f;
}

//10

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

//fim funções












int main(){  //MENU DE ESCOLHA
  setlocale(LC_ALL, "Portuguese");
  
  int sair; //variavel que decide se sai ou continua executando o programa na função while
  
  do{
      int menu; //variavel relacionado ao número escolhido no menu
      printf("\n1- Descobrir situação de aluno com base em suas 3 provas");
      printf("\n2- Verificar o tipo de triângulo");
      printf("\n3- Calcular imposto de renda");
      printf("\n4- Descobrir volume de um cone");
      printf("\n5- Descobrir volume de uma pirâmide");
      printf("\n6- Multiplicar um Número pelo outro usando apenas soma");
      printf("\n7- Descobrir porcentagem de alunos no restaurante da universidade");
      printf("\n8- Buscar o valor no vetor e informar sua posição");
      printf("\n9- Calcular o valor fatorial de um número inteiro positivo");
      printf("\n10- Descobrir se um número é primo, ou não");
      printf("\nEscolha qual programa você deseja executar usando números de 1 a 10: ");
      scanf("%d", &menu);










  
  
	  switch(menu){
	  	case 1 :
	  	 
		   //var
	 	    float n1, n2, n3;
			float maluno;
			char nome[999];
			
			printf("\nEscreva o Nome do Aluno: ");
			scanf("%s", nome);
			
			printf("\nCaso seja uma nota de valor decimal, usar vírgula para representar.");
			printf("\nEscreva a nota da primeira prova: ");
			scanf("%f", &n1);
			
			printf("\nEscreva a nota da segunda prova: ");
			scanf("%f", &n2);
			
			printf("\nEscreva a nota da terceira prova: ");
			scanf("%f", &n3);
			
			maluno = media_aluno(n1, n2, n3);
			
				if (maluno >= 7)
				{
						
					printf("O Aluno(a) %s foi aprovado(a) com média: %.2f", nome, maluno);		
			
				} 	
				else
				{
				 	
					if (maluno < 7 && maluno >= 5)
					{
								
					printf("O Aluno(a) %s está de recuperação com média: %.2f", nome, maluno);	
						
					}		
					else
					{
								
					printf("O Aluno(a) %s foi reprovado com média: %.2f", nome, maluno);	
						
					}
				
				
					
				}
  	  			  	  	
	  	break;
	  	//fim do caso 1
	  	case 2 :
			   		  
            int ladoa, ladob, ladoc;
			char* resptriangulo;
			
		 	  printf("Ensira o valor do Lado A: ");
		      scanf("%d", &ladoa);
		      printf("Ensira o valor do Lado B: ");
		      scanf("%d", &ladob);
		      printf("Ensira o valor do Lado C: ");
		      scanf("%d", &ladoc);
			
			  resptriangulo = nometriangulos(ladoa, ladob, ladoc);
			
			  printf("O triângulo é: %s", resptriangulo);  
		  
		break;
	  	//fim do caso 2   	
	  	case 3 : 	
	  	
			char nome_pessoa [999];
			float renda_anual;
			int dependentes;
			float retorno;
			
				
			printf("\nDigite seu nome: ");
			scanf("%s", &nome_pessoa);
			
			printf("Digite sua renda anual: ");
			scanf("%f", &renda_anual);
			
			printf("Digite o número de dependentes: ");
			scanf("%d", &dependentes);
			
			retorno = funcao_imposto(renda_anual, dependentes);
			
			printf("O seu salário líquido é: R$ %.2f", retorno);
	  	
	  	break;
	  	//fim do caso 3
	  	case 4 :
	  	 	  	
			float raiocone, alturacone, pi;
			float rescone;
			
			pi = 3,14;
			
			printf("\nDigite o Valor do Raio: ");
			scanf("%f", &raiocone); 
				if(raiocone < 0) {
					printf("\nValor invalido\n");
					printf("\nDigite o Valor do Raio: ");
					scanf("%f", &raiocone);
				}
			
			printf("Digite o Valor da Altura: ");
			scanf("%f", &alturacone);
				if(alturacone < 0) {
					printf("\nValor invalido\n");
					printf("\nDigite o Valor da Altura: ");
					scanf("%f", &alturacone);
				}
		
		    rescone = volume_cone (raiocone, alturacone);
		
			
			printf("\nO Volume do cone é: %.2f", rescone);
	  	
	  	break;
	  	//fim do caso 4
	  	case 5 :
	  	
		  	float aresta, altura;
		    float vpiramide;
		    float respiramide;
		    
			printf("\nColoque a aresta da pirâmide: ");
			scanf("%f", &aresta);
			printf("Coloque a altura da pirâmide: ");
			scanf("%f", &altura);
			
			
			
			vpiramide = volume_piramide (aresta, altura);
		    
		    printf("O volume da pirâmide é: %.2f", vpiramide );
	
	
	  	
	  	break;
	  	//fim do caso 5
	  	case 6 :
	  	 
		    int numero1, numero2;
			int resoma;
			int r;
			
			
			printf ("\nDigite dois valores para serem multiplicados utilizando a soma progressiva: ");
			printf ("\n \nPrimeiro valor: ");
			scanf ("%d", &numero1);
			printf ("Segundo valor: ");
			scanf ("%d", &numero2);
			
			resoma = soma_prog(numero1, numero2);
			
			printf("\n%d multiplicado por %d pela soma progressiva tem como resultado: %d\n\n", numero1, numero2, resoma);
		   	  			  	  	
	  	break;
	  	//fim do caso 6
	  	case 7 :
	   	{
	   	
		   int menos10, entre10e15, acimade15;
		   int alunoid = 0;
		   float pormenor10, porentre10e15, poracimade15, nvezes;
		   char* statusresposta;
		
		   
		   do{
		   	
			   	alunoid++;
			   	printf("\nAluno %d digite a quantidade de vezes que usou o restaurante: ", alunoid);
			   	scanf("%f", &nvezes);
			   	
				statusresposta = restaurante(nvezes);
			   	
			    if (statusresposta == "menos10")
				{	
					menos10++;		
				}
				else
				{
					if (statusresposta == "entre10e15")
					{
						entre10e15++;			
					}
			        else
			        {
			        	acimade15++;       	
			        }		
				}  	
		   } while(nvezes!= -1);
		   
		   pormenor10 = (menos10 * 100) / alunoid;
		   porentre10e15 = (entre10e15 * 100) / alunoid;
		   poracimade15 = (acimade15 * 100) / alunoid;
		   
		   
		   printf("\nA porcentagem de alunos que frequentaram o restaurante menos de 10 vezes é de: %4.1f %%", pormenor10);
		   printf("\nA porcentagem de alunos que frequentaram o restaurante entre 10 e 15 vezes é de: %4.1f %%", porentre10e15);
		   printf("\nA porcentagem de alunos que frequentaram o restaurante mais de 15 vezes é de: %4.1f %%", poracimade15);	  
		  
		
		break;	  	
	  	}
  		//fim do caso 7   	
	  	
        case 8 : 	
	  	 {
	  	 
			int X, Y, vet[20] = {92, 85, 60, 49, 51, 6, 38, 7, 2, 13, 3 ,63, 84, 41, 79, 53, 29, 100, 42, 93};
		
			printf("\nDigite um número de 1 até 100: ");
			scanf("%d", &X);
			
			for (Y = 0; Y < 20; Y++) {
				if(X == vet[Y]) {
					break;
				}
			}
			
			if (Y < 20) {
				printf("O Número digitado foi encontrado no vetor: %d", Y);
			}
			
			else {
				printf("Posição não encontrada em nenhum vetor.");
			}
				  	  	
			  	break;
			  }
				  //fim do caso 8
			  	case 9 :
			  	 	  	
			  		int x, y;
		    		printf("\nDigite um numero inteiro para calcular o fatorial: ");
		    		scanf("%d", &x);
		    		y = fatorial (x);
		    		printf("O fatorial de %d é = %d",x, y);
	  	
	  	break;
	  	//fim do caso 9
	  	case 10 :
	  	
	  	    int n;
			bool resultado;
		
		
			printf("\nDigite um número inteiro, se for primo exibirá VERDADEIRO se não, FALSO: ");
			scanf("%d", &n);
		
			resultado = n_primo(n);
		
			if (resultado == true)
			{
				printf ("\nVERDADEIRO");		
			}
			else
			{
				printf("\nFALSO");
			}
	  		  	
	  	break;
	  	//fim do caso 10
	  	
	  	default: printf("\nOpção inválida, lembre-se de escolher um número de 1 a 10.");
		
     }
     fflush(stdin);// limpeza do buffer do teclado para não pular leituras
     
     printf("\n \nDigite 1 para usar outras funções, ou qualquer outro número para sair: ");
     scanf("%d", &sair);
     
  } while(sair==1);

  return 0;

}

