algoritmo "trabalho"
var
//menu de escolha
menu: caractere
//1
maluno: real
n1, n2, n3: real
nome: caractere


//2
ladoA, ladoB, ladoC:real
resptriangulo: caractere


//3
nome_pessoa: caractere
renda_anual: real
n_dependente: inteiro


//4
raio, altura: real


//5
a, h: real


//6
x, y, i: inteiro


//7
aluno_id, menor_dez, entre_dezquinze, acima_quinze,nvezes: inteiro
status_resposta: caractere
por_menordez,por_entredezquinze,por_acimaquinze: real


//8
nv: inteiro
rvtr: inteiro
localizada: inteiro


//9
num: inteiro


//10
n: inteiro


//FUNCOES


//1
Funcao media_aluno( n1, n2, n3:real) :real
var
media:real
Inicio
media <- (n1 + n2 + n3) / 3
retorne media
fimfuncao


//2
Funcao nome_triangulos(ladoA, ladoB, ladoC: real) : caractere
var
tipo: caractere

Inicio

      se (ladoA = ladoB) e (ladoB = ladoC) entao
         tipo <- "Equil�tero"
      senao
                  se  (ladoA <> ladoB) e (ladoB <> ladoC)  entao
                  tipo <- "Escaleno"
                  senao
                  tipo <- "Is�celes"
                  fimse
      fimse


retorne tipo
fimfuncao


//3
Funcao imposto_renda( renda_anual,n_dependente: REAL) : REAL
var
desconto,rendaliq,aliquota: REAL
Inicio
   desconto <- (n_dependente * 600)
   rendaliq <- (renda_anual - desconto)
   SE (rendaliq >= 10000) e (rendaliq <= 30000) ENTAO
      aliquota <- (rendaliq*5)/100
      rendaliq <- renda_anual - aliquota
   SENAO
      SE (rendaliq > 30000) e (rendaliq < 60000) ENTAO
         aliquota <- (rendaliq*10)/100
         rendaliq <- renda_anual - aliquota
      SENAO
         SE (rendaliq >= 60000) ENTAO
            aliquota <- (rendaliq*15)/100
            rendaliq <- renda_anual - aliquota
         FIMSE
      FIMSE
   FIMSE
   retorne rendaliq
fimfuncao


//4
Funcao volume_cone(raio, altura: real) : REAL
var
volume: REAL
Inicio
volume <- (pi * raio^2 * altura) / 3
retorne volume
fimfuncao


//5
Funcao volume_p(h, a: REAL) : REAL
var
volume: REAL
Inicio
volume <- (h*a)
retorne volume
fimfuncao


//6
Funcao soma_prog( x, y: inteiro) : inteiro
var
resolucao: inteiro
Inicio
   Para i de 1 ate y passo 1 faca
   resolucao <- resolucao + x
   Fimpara
retorne resolucao
fimfuncao


//7
Funcao restaurante( nvezes: inteiro) : caractere
var
status: caractere
Inicio
      se (nvezes < 10) e (nvezes <> -1) entao
      status <- "MENOR DEZ"
      senao
           se (nvezes >= 10) e (nvezes <= 15) entao
           status <- "ENTRE DEZ QUINZE"
           senao
                se nvezes > 15 entao
                status <- "ACIMA QUINZE"
                fimse
           fimse
      fimse
retorne status
fimfuncao


//8

Funcao n_vtr(nv: inteiro) : inteiro
var
v: vetor [1..20] de inteiro
posicao, i: inteiro
Inicio

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

PARA i DE 1 ATE 20 FACA
     se nv = v[i] entao
     posicao <- i
     interrompa
     fimse
FIMPARA
retorne posicao
fimfuncao






//9
Funcao n_fatorial( num: inteiro) : inteiro
var
multi, fat: inteiro
Inicio
   multi <- 1

   Para fat de num ate 1 passo -1 faca
   multi <- multi * fat
   Fimpara
   
retorne multi
fimfuncao


//10
Funcao n_primo( n: inteiro) : logico
var
booleana: logico
divisores, possibilidade: inteiro

Inicio

divisores <- 0
para possibilidade de 1 ate n faca
   se n%possibilidade=0 entao
   divisores <- divisores+1
   fimse
   possibilidade <- possibilidade+1
fimpara

se divisores=2 entao
booleana <- VERDADEIRO
senao
booleana <- FALSO
fimse

retorne booleana
fimfuncao


















inicio
//menu de escolha

      ESCREVAL ("1- Descobrir situa��o de aluno com base em suas 3 provas")
      ESCREVAL ("2- Verificar o tipo de tri�ngulo")
      ESCREVAL ("3- Calcular imposto de renda")
      ESCREVAL ("4- Descobrir volume de um cone")
      ESCREVAL ("5- Descobrir volume de uma pir�mide")
      ESCREVAL ("6- Multiplicar um N�mero pelo outro usando apenas soma")
      ESCREVAL ("7- Descobrir porcentagem de alunos no restaurante da universidade")
      ESCREVAL ("8- Buscar o valor no vetor e informar sua posi��o")
      ESCREVAL ("9- calcular o valor fatorial de um n�mero inteiro positivo")
      ESCREVAL ("10- Descobrir se um n�mero � primo, ou n�o")
      ESCREVA ("Escolha qual programa voc� deseja executar usando n�meros de 1 a 10: ")
      Leia(menu)





ESCOLHA menu
         CASO "1"

              Escreva("Escreva o nome do aluno: ")
              Leia(nome)
              Escreva("Escreva a nota da primeira prova: ")
              Leia(n1)
              Escreva("Escreva a nota da segunda prova: ")
              Leia(n2)
              Escreva("Escreva a nota da terceira prova: ")
              Leia(n3)

              maluno <- media_aluno(n1, n2, n3)

              se maluno >= 7 entao
              Escreval ("O Aluno(a) ", nome, "foi aprovado(a) com m�dia: ", maluno:4:2)
              senao
                  se (maluno < 7) e (maluno >= 5) entao
                  Escreval ("O Aluno(a) ",nome," est� de recupera��o com m�dia: ", maluno:4:2)
                  senao
                  Escreval ("O Aluno(a) ",nome," foi reprovado(a) com m�dia: ", maluno:4:2)
                  fimse
              fimse


         CASO "2"

              escreva("Ensira o valor do Lado A: ")
              leia(ladoA)
              escreva("Ensira o valor do Lado B: ")
              leia(ladoB)
              escreva("Ensira o valor do Lado C: ")
              leia(ladoC)

              resptriangulo <- nome_triangulos(ladoA, ladoB, ladoC)
              
              Escreval ("O tri�ngulo �: ", resptriangulo)


         CASO "3"
              escreva("Digite seu nome: ")
              leia(nome_pessoa)
              escreva("Digite sua renda anual: ")
              leia(renda_anual)
              escreva("Digite o numero de dependentes: ")
              leia(n_dependente)
              escreval("O seu sal�rio liquido �: ",imposto_renda(renda_anual,n_dependente):10:2)


         CASO "4"
         
              escreva("Escreva o raio da base do cone: ")
              leia(raio)
              escreva("Escreva a altura do cone: ")
              leia(altura)
              escreval("volume do cone � de:", volume_cone(raio, altura):10:2," cm�")


         CASO "5"

              escreva("Escreva a aresta da pir�mide: ")
              leia(a)
              escreva("Escreva a altura da pir�mide: ")
              leia(h)
              escreval("volume da pir�mide � de:", volume_p(a, h):10:2," cm�")


         CASO "6"

             Escreva ("Digite o valor do primeiro n�mero: ")
             Leia (x)
             Escreva ("Digite o valor do segundo n�mero: ")
             Leia(y)

             Escreval ("O resultado dessa opera��o �: ", soma_prog( x, y))


         CASO "7"

            Enquanto nvezes<>-1 faca
                     aluno_id<-aluno_id+1
                     escreva("Aluno ",aluno_id," digite a quantidade de vezes que usou o restaurante: ")
                     leia(nvezes)
                     status_resposta<-restaurante(nvezes)
                     SE status_resposta="MENOR DEZ" entao
                        menor_dez<-menor_dez+1
                     SENAO
                          SE status_resposta="ENTRE DEZ QUINZE" entao
                             entre_dezquinze<-entre_dezquinze+1
                          SENAO
                               acima_quinze<-acima_quinze+1
                          FIMSE
                     FIMSE
            fimenquanto

            por_menordez <- (menor_dez * 100) / aluno_id
            por_entredezquinze <- (entre_dezquinze * 100) / aluno_id
            por_acimaquinze <- (acima_quinze * 100) / aluno_id

            Escreval("A porcentagem de alunos que frequentaram o restaurante menos de 10 vezes � de ", por_menordez:3:2, "%")
            Escreval("A porcentagem de alunos que frequentaram o restaurante entre 10 e 15 vezes � de ", por_entredezquinze:3:2, "%")
            Escreval("A porcentagem de alunos que frequentaram o restaurante mais de 15 vezes � de ", por_acimaquinze:3:2, "%")


         CASO "8"

              Escreva("Digite um n�mero entre 1 e 50: ")
              leia(nv)
              
              
              localizada <- n_vtr(nv)
              se localizada = 0 entao
              Escreval("O n�mero n�o foi encontrado dentro do vetor.")
              fimse
              

                          
                               se localizada <> 0 entao
                               escreva("O valor est� dentro do vetor: ", localizada)

                               fimse


         CASO "9"

             Escreva("Escolha um n�mero para descobrir o fatorial: ")
             Leia (num)
             Escreva("O fatorial de",num," �: ",n_fatorial(num))


         CASO "10"

            Escreva("Digite o n�mero, se for primo exibir� VERDADEIRO se n�o, FALSO: ")
            leia(n)
            Escreva(n_primo( n))


FIMESCOLHA


fimalgoritmo

