#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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








int main()
{
    setlocale(LC_ALL, "Portuguese");

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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
