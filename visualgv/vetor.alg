algoritmo "semnome"
// Função :
// Autor :
// Data : 15/10/2021
// Seção de Declarações 
var
v: vetor [1..20] de inteiro
i, n: inteiro
posicao: inteiro
localizada: logico
inicio
// Seção de Comandos
v[1]<-15
v[2]<-43
v[3]<-50
v[4]<-13
v[5]<-43
v[6]<-22
v[7]<-17
v[8]<-12
v[9]<-21
v[10]<-33
v[11]<-40
v[12]<-30
v[13]<-8
v[14]<-6
v[15]<-1
v[16]<-34
v[17]<-2
v[18]<-47
v[19]<-48
v[20]<-26
Escreva("Digite um número entre 1 e 50: ")
leia(n)
     localizada <- falso
PARA i DE 1 ATE 20 FACA
     se n = v[i] entao
     localizada <- verdadeiro
     posicao <- i
     interrompa
     fimse
FIMPARA
       se localizada = verdadeiro entao
       escreva("O valor está dentro do vetor: ", posicao)
       senao
       escreva("O valor que você procura não está dentro do vetor.")
       fimse
fimalgoritmo


