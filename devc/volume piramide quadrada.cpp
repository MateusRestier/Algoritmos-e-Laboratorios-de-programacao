#include "stdio.h"
#include "locale.h"
#include "string.h"


float volume_piramide (float aresta, float altura)
{
float volume;
	
volume = aresta * altura;	

	
return volume;
}



int main(){
	setlocale(LC_ALL, "Portuguese");
   
    float aresta, altura;
    float vpiramide;
    float respiramide;
    
	printf("Coloque a aresta da pir�mide: ");
	scanf("%f", &aresta);
	printf("Coloque a altura da pir�mide: ");
	scanf("%f", &altura);
	
	
	
	vpiramide = volume_piramide (aresta, altura);
    
    printf("%.2fm�", vpiramide );
	
	

    return 0;
}
  

