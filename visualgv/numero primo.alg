algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 11/10/2021
// Se��o de Declara��es
var
n, divisores, possibilidade: inteiro

inicio
// Se��o de Comandos

Escreval("Digite o n�mero para descobrir se � primo, ou n�o")
leia(n)
divisores <- 0
para possibilidade de 1 ate n faca
   se n%possibilidade=0 entao
   divisores <- divisores+1
   fimse
   possibilidade <- possibilidade+1
fimpara

se divisores=2 entao
escreval("� primo")
senao
escreval("n�o � primo")
fimse

fimalgoritmo
