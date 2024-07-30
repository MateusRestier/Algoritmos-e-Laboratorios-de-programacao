#include <stdio.h>
#include <stdlib.h>
#include "locale.h"
#include <math.h>


float volume_cone (float raiocone, float alturacone)
{
	
float pi;
float volumecone, ptraio;
pi = 3,14;	
ptraio = raiocone * raiocone;
	
volumecone = (pi * ptraio * alturacone)/3;
	

return volumecone;	
}






int main()
{
setlocale(LC_ALL, "Portuguese");
	
	float raiocone, alturacone, pi;
	float rescone;
	
	pi = 3,14;
	
	printf("\n Digite o Valor do Raio: ");
	scanf("%f", &raiocone); 
		if(raiocone < 0) {
			printf("\n Valor invalido\n");
			printf("\n Digite o Valor do Raio: ");
			scanf("%f", &raiocone);
		}
	
	printf("\n Digite o Valor da Altura: ");
	scanf("%f", &alturacone);
		if(alturacone < 0) {
			printf("\n Valor invalido\n");
			printf("\n Digite o Valor da Altura: ");
			scanf("%f", &alturacone);
		}

    rescone = volume_cone (raiocone, alturacone);

	
	printf("\nO Volume do cone é: %.2fcm³", rescone);
return 0;
}
