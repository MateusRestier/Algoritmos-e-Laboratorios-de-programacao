#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




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


int main() {
   setlocale (LC_ALL, "Portuguese");
   
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
  
   return 0;
}


