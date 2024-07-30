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
    
	printf("Coloque a aresta da pirâmide: ");
	scanf("%f", &aresta);
	printf("Coloque a altura da pirâmide: ");
	scanf("%f", &altura);
	
	
	
	vpiramide = volume_piramide (aresta, altura);
    
    printf("%.2fm²", vpiramide );
	
	

    return 0;
}
  

