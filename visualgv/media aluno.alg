algoritmo "media aluno"
// Fun��o :
// Autor :
// Data : 15/10/2021
// Se��o de Declara��es 
var
nome: caractere
n1, n2, n3: real
media: real
inicio
// Se��o de Comandos

Escreva("Escreva o nome do aluno: ")
Leia(nome)
Escreva("Escreva a nota da primeira prova: ")
Leia(n1)
Escreva("Escreva a nota da segunda prova: ")
Leia(n2)
Escreva("Escreva a nota da terceira prova: ")
Leia(n3)

media <- (n1 + n2 + n3) / 3

se media >= 7 entao
Escreval ("O Aluno(a) ", nome, "foi aprovado(a) com m�dia: ", media:4:2)
senao
     se (media < 7) e (media >= 5) entao
     Escreval ("O Aluno(a) ",nome," est� de recupera��o com m�dia: ", media:4:2)
     senao
     Escreval ("O Aluno(a) ",nome," foi reprovado(a) com m�dia: ", media:4:2)
     fimse
fimse
fimalgoritmo


