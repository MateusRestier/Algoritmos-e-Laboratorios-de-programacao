algoritmo "Projeto de Grupo"
// Fun��o :
// Autor :
// Data : 27/08/2021
// Se��o de Declara��es
var
ladoA, ladoB, ladoC:real
inicio
// Se��o de Comandos
//entradas
escreva("lado A: ")
leia(ladoA)
escreva("lado B: ")
leia(ladoB)
escreva("lado C: ")
leia(ladoC)
//processamento
Se (ladoA = ladoB) e (ladoB = ladoC) entao
escreval("Este tri�ngulo � Equil�tero")
senao
                  se (ladoA <> ladoB) e (ladoB <> ladoC) entao
                  escreval("Este tri�ngulo � Escaleno")
                  senao
                  escreval("Este tri�ngulo � Is�celes")

                  
                  fimse

fimse
   //sa�das

fimalgoritmo
