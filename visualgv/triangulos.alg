algoritmo "Projeto de Grupo"
// Função :
// Autor :
// Data : 27/08/2021
// Seção de Declarações
var
ladoA, ladoB, ladoC:real
inicio
// Seção de Comandos
//entradas
escreva("lado A: ")
leia(ladoA)
escreva("lado B: ")
leia(ladoB)
escreva("lado C: ")
leia(ladoC)
//processamento
Se (ladoA = ladoB) e (ladoB = ladoC) entao
escreval("Este triângulo é Equilátero")
senao
                  se (ladoA <> ladoB) e (ladoB <> ladoC) entao
                  escreval("Este triângulo é Escaleno")
                  senao
                  escreval("Este triângulo é Isóceles")

                  
                  fimse

fimse
   //saídas

fimalgoritmo
