algoritmo "restaurante"
// Função :
// Autor :
// Data : 15/10/2021
// Seção de Declarações
var
nvezes: real
aluno_id, menor_dez, entre_dezquinze, acima_quinze: inteiro
por_menordez, por_entredezquinze, por_acimaquinze: real

inicio
// Seção de Comandos
Enquanto nvezes <> -1 faca

      aluno_id <- aluno_id +1
      escreva("Aluno ",aluno_id," digite a quantidade de vezes que usou o restaurante: ")
      leia(nvezes)
      se (nvezes < 10) e (nvezes <> -1) entao
      menor_dez <- menor_dez +1
      senao
           se (nvezes >= 10) e (nvezes <= 15) entao
           entre_dezquinze <- entre_dezquinze + 1
           senao
                se nvezes > 15 entao
                acima_quinze <- acima_quinze + 1
                fimse
           fimse
      fimse
fimenquanto

por_menordez <- (menor_dez * 100) / aluno_id
por_entredezquinze <- (entre_dezquinze * 100) / aluno_id
por_acimaquinze <- (acima_quinze * 100) / aluno_id

Escreval("A porcentagem de alunos que frequentaram o restaurante menos de 10 vezes é de ", por_menordez:3:2, "%")
Escreval("A porcentagem de alunos que frequentaram o restaurante entre 10 e 15 vezes é de ", por_entredezquinze:3:2, "%")
Escreval("A porcentagem de alunos que frequentaram o restaurante mais de 15 vezes é de ", por_acimaquinze:3:2, "%")

fimalgoritmo
