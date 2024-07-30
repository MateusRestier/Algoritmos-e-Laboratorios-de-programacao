#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float n_vtr (int y)
{
	int X, posicao, vet[20] = {92, 85, 60, 49, 51, 6, 38, 7, 2, 13, 3 ,63, 84, 41, 79, 53, 29, 100, 42, 93};
	
	for (y = 0; y < 20; y++) {
		if(X == vet[y])
		{
			posicao = y;
			break;
		}
	}
	
return posicao;
}


int main (){ 

   setlocale(LC_ALL, "Portuguese");	

int X, localizada;

	
	printf("numero 1 50: ");
    scanf("%d", &X);
    
    localizada = n_vtr (X);

    printf("%d", localizada);
	
	
	return 0;
}




//nv: inteiro
//rvtr: inteiro
//localizada: inteiro


/*

int main(void) {
setlocale(LC_ALL, "Portuguese");

	int X, Y, vet[20] = {92, 85, 60, 49, 51, 6, 38, 7, 2, 13, 3 ,63, 84, 41, 79, 53, 29, 100, 42, 93};

	printf("Digite um número de 1 até 100: ");
	scanf("%d", &X);
	
	for (Y = 0; Y < 20; Y++) {
		if(X == vet[Y]) {
			break;
		}
	}
	
	if (Y < 20) {
		printf("\n O Número digitado foi encontrado no vetor: %d", Y);
	}
	
	else {
		printf("\n posição não encontrada em nenhum vetor");
	}
	
return 0;
}*/
