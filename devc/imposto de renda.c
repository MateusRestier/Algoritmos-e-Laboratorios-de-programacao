#include <stdio.h>
#include <locale.h>

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





int main(){
setlocale (LC_ALL, "Portuguese");
char nome_pessoa [999];
float renda_anual;
int dependentes;
float retorno;

	
printf("Digite seu nome: ");
scanf("%s", &nome_pessoa);

printf("Digite sua renda anual: ");
scanf("%f", &renda_anual);

printf("Digite o número de dependentes: ");
scanf("%d", &dependentes);

retorno = funcao_imposto(renda_anual, dependentes);

printf("O seu salário líquido é: R$ %.2f", retorno);

return 0;
}
	
	


