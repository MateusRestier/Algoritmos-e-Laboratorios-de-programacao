#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void list_products (){
    printf("\n1- Arroz");
    printf("\n2- Dúzia de ovos");
    printf("\n3- Pão de forma integral");
    printf("\n4- Café");
    printf("\n5- Leite");
    printf("\n6- Refrigerante");
    printf("\n7- Queijo");
    printf("\n8- Presunto");
    printf("\n9- Condicionador");
    printf("\n10- Shampoo");
    printf("\n11- Sabonete líquido");
    printf("\n12- Escova de dente");
    printf("\n13- Pasta de dente");
    printf("\n14- Papel higiênico");
    printf("\n15- Amaciante");
    printf("\n16- Esponja de Cozinha");
    printf("\n17- Água sanitária");
    printf("\n18- Desinfetante");
    printf("\n19- Detergente");
    printf("\n20- Sabão em Pó");		
}

struct produto{
	int id;
	char* nome;
	float preco;
}estoque[20];

struct lista_struct{	
   int id;	
}lista[20];

int inicializarCompras()
{
  	int resp = 0;
  	int i;
  	for(i=1;i<=20; i++){
  		lista[i].id = -1;
  	}
  	resp = 0;
  	return resp;
}

void listarProdutos()
{
	system("cls");
    printf("\n============================================="); 
    printf("\nListando produtos da lista:");
    printf("\n============================================="); 
    printf("\n");
	for(int i=1;i<=20;i++)
	{
	 	if(lista[i].id !=-1)
        {
            printf("\nIdentificador: %i [%s R$ %.2f]",i,estoque[lista[i].id].nome,estoque[lista[i].id].preco);
        }
	}
}

int buscarProduto(int pos)
{
    if(lista[pos].id !=-1)
    {
        printf("\n============================================="); 
        printf("\nItem: %s , preço %.2f",estoque[lista[pos].id].nome,estoque[lista[pos].id].preco);
        printf("\n============================================="); 
        printf("\n");
        return 1;
    }
    else
    {
        printf("\n============================================="); 
        printf("\nIndentificador não é válido.");
        printf("\n============================================="); 
        return 0;
    }
}


int main(){
	inicializarCompras();
	//estruturas
	estoque[1].id=1;
	estoque[1].nome="Arroz";
	estoque[1].preco=5.0;
	
	estoque[2].id=2;
	estoque[2].nome="Dúzia de ovos";
	estoque[2].preco=6.0;	
	
	estoque[3].id=3;
	estoque[3].nome="Pão de forma integral";
	estoque[3].preco=8.5;	
	
	estoque[4].id=4;
	estoque[4].nome="Pacote de café";
	estoque[4].preco=4.0;
	
	estoque[5].id=5;
	estoque[5].nome="Leite";
	estoque[5].preco=3.5;	
	
	estoque[6].id=6;
	estoque[6].nome="Refrigerante";
	estoque[6].preco=4.5;	
	
	estoque[7].id=7;
	estoque[7].nome="Queijo";
	estoque[7].preco=4.0;	
	
	estoque[8].id=8;
	estoque[8].nome="Presunto";
	estoque[8].preco=3.0;	
	
	estoque[9].id=9;
	estoque[9].nome="Condicionador";
	estoque[9].preco=6.0;	
	
	estoque[10].id=10;
	estoque[10].nome="Shampoo";
	estoque[10].preco=6.5;	
	
	estoque[11].id=11;
	estoque[11].nome="Sabonete líquido";
	estoque[11].preco=3.5;	
	
	estoque[12].id=12;
	estoque[12].nome="Escova de dente";
	estoque[12].preco=2.5;	
	
	estoque[13].id=13;
	estoque[13].nome="Pasta de dente";
	estoque[13].preco=3.5;	
	
	estoque[14].id=14;
	estoque[14].nome="Papel Higiênico";
	estoque[14].preco=4.5;	
		
	estoque[15].id=15;
	estoque[15].nome="Amaciante";
	estoque[15].preco=6.5;

	estoque[16].id=16;
	estoque[16].nome="Esponja de Cozinha";
	estoque[16].preco=2.5;

	estoque[17].id=17;
	estoque[17].nome="Água Sanitária";
	estoque[17].preco=5.5;

	estoque[18].id=18;
	estoque[18].nome="Desinfetante";
	estoque[18].preco=4.5;

	estoque[19].id=19;
	estoque[19].nome="Detergente";
	estoque[19].preco=2.0;

	estoque[20].id=20;
	estoque[20].nome="Sabão em pó";
	estoque[20].preco=4.0;
	
	
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	 
	int menu; //variavel relacionado ao número escolhido no menu    
 	int prod_id;
 	bool continua=false;
 	bool sair_sistema=false;
 	do{
        printf("\n============================================="); 
        printf("\n1- Adicionar um produto ao carrinho ");
        printf("\n2- Excluir um produto do carrinho ");
        printf("\n3- Listar os produtos do carrinho ");
        printf("\n4- Sair");
        printf("\n============================================="); 
        printf("\nEscolha qual opção deseja executar: ");
        scanf("%d", &menu);
        system("cls");
	
		switch(menu)
        {
            //adicionar produto 
			case 1:{
                printf("\n=============================================");   
                list_products();
                printf("\n============================================="); 
                printf("\nEscolha qual produto gostaria de adicionar ao carrinho: ");
                scanf("%i",&prod_id); 
                if(prod_id<1 || prod_id>20)
                {
                    continua=true;
                    do{
                        system("cls");
                        printf("\n============================================="); 
                        printf("\nEscolha inválida somente itens de 1 até 20: ");
                        printf("\n=============================================");   
                        list_products();
                        printf("\n============================================="); 
                        printf("\nEscolha qual produto gostaria de adicionar ao carrinho: ");
                        scanf("%i",&prod_id);
                        if(prod_id<1 || prod_id>20)
                        {
                            continua=true;
                        }
                        else
                        {
                            continua=false;
                        }
                    }while(continua);
                }

                //verifica espaço na lista
                int posicao=-1;
                for(int i=1;i<=20; i++)
                {
                    if(lista[i].id==-1)
                    {
                        posicao = i;
                        break;
                    }
                }
                
				system("cls");
                //tem espaço na lista?
                if(posicao!=-1)
                {
            		lista[posicao].id=prod_id;
                    printf("\n============================================="); 
                    printf("\nO item (%s) foi adicionado com sucesso a sua lista.",estoque[prod_id].nome);
                    printf("\n=============================================\n");
					system("pause");
                }	
                else
                {
                    //lista lotada!
                    printf("\n============================================="); 
                    printf("\nSua lista de compras está lotada.");
                    printf("\n============================================="); 
                }	
            
            }
            break;
            //exlcluir produto
            case 2:{
                int identificador;
                char confirmacao_resp;
                listarProdutos();
                printf("\n============================================="); 
                printf("\n Qual é o identificador do produto a qual deseja remover de sua lista de compras:");
                scanf("%d",&identificador);
                int resposta=buscarProduto(identificador);
                if(resposta==0)
                {
                    do{
                        printf("\n============================================="); 
                        printf("\n Qual é o identificador do produto a qual deseja remover de sua lista de compras:");
                        scanf("%d",&identificador);
                        resposta=buscarProduto(identificador);
                    }while(resposta==0);
                }
                fflush(stdin);// limpeza do buffer do teclado para nãopular leituras
                printf("\n Confirma a exclusão do item [S ou N]:");
                scanf("%c",&confirmacao_resp);
                if(confirmacao_resp=='s' || confirmacao_resp=='S')
                {
                    lista[identificador].id = -1;
                }
            }
           	break;
            //listar produto
           	case 3:{
                listarProdutos();
            }
   			break;
   			case 4:{
                system("exit");
   			}
   			break;
   			default:{
                printf("\n============================================="); 
				printf("\nOpção inválida.");
				printf("\n=============================================");
            }
			break;
			case 5:{
				
				for(int i=1;i<=20;i++)
				{
				 	if(lista[i].id !=-1)
			        {
			            printf("\nIdentificador: %i [%s R$ %.2f]",i,estoque[lista[i].id].nome,estoque[lista[i].id].preco);
			            
			        }
				}
		
				
				
				
				
			break;
			}
        }
		fflush(stdin);// limpeza do buffer do teclado para nãopular leituras	
	}while(menu !=4);
	return 0;
}
