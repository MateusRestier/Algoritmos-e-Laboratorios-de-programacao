algoritmo "exerc�cio"
// Fun��o :
// Autor :
// Data : 01/09/2021
// Se��o de Declara��es 
var
   a, b, c: real
   x1, x2: real
   delta: real
   raizes: inteiro

inicio
escreval("Informe o valor de A: ")
leia(a)
escreval("Informe o valor de B: ")
leia(b)
escreval("Informe o valor de C: ")
leia(c)

delta <- b^2 - 4 * a * c
se delta = 0 entao
   raizes <- 1
fimse
se delta < 0 entao
   raizes <- 0
senao
   raizes <- 2
fimse

se raizes > 0 entao

   se raizes = 1 entao
      x1 <- (-b)+raizq((b)^2-4*(a)*(c))/2*(a)
   senao
        x1 <- (-b)+raizq((b)^2-4*(a)*(c))/2*(a)
        x2 <- (-b)-raizq((b)^2-4*(a)*(c))/2*(a)
   fimse
   escreval("Os valores de X1 e X2 s�o respectivamente: ", x1 ," e ", x2)

senao
     escreval ("Esta equa��o n�o possui raizes")
fimse










 
fimalgoritmo

