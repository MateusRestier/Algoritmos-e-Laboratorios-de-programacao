algoritmo "semnome"
// Função :
// Autor :
// Data : 11/10/2021
// Seção de Declarações
var
n, divisores, possibilidade: inteiro

inicio
// Seção de Comandos

Escreval("Digite o número para descobrir se é primo, ou não")
leia(n)
divisores <- 0
para possibilidade de 1 ate n faca
   se n%possibilidade=0 entao
   divisores <- divisores+1
   fimse
   possibilidade <- possibilidade+1
fimpara

se divisores=2 entao
escreval("é primo")
senao
escreval("não é primo")
fimse

fimalgoritmo
