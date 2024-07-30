#include <stdio.h>
int main(){
	float total, desconto, pagar;
	//entrada
	printf("Digite o valor da compra:   ");
	scanf("%f", &total);
	//processamento
	desconto = total * 5/100;
	pagar = total - desconto;
	//saída
	printf("\nValor inicial: R$ %6.2f", total)	;
	printf("\nValor a pagar: R$ %6.2f", pagar)	;
	
	
	
	
	
	
	return 0;	
	
	
}



