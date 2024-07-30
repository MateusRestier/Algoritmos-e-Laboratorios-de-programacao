algoritmo "desconto"
// Função :
// Autor :
// Data : 27/08/2021
// Seção de Declarações 
var
total, desconto, pagar : real
inicio
escreva("Digite o valor da compra:   ")
leia(total)
//processamento
desconto <- total * 5 / 100
pagar <- total - desconto
//saídas
escreva("Valor a pagar R$" , pagar:6:2)

// Seção de Comandos

fimalgoritmo
