algoritmo "imposto de renda"
// Função :
// Autor :
// Data : 11/10/2021
// Seção de Declarações
var
nome_contri: literal
renda_anual,n_dependente,desconto,aliquota,rendaliq: numerico

inicio
// Seção de Comandos
ESCREVAl ("Digite o nome do Contribuinte, ou FIM para terminar: ")
LEIA (nome_contri)
ENQUANTO (nome_contri<> "FIM") FACA
   ESCREVAl ("Digite a Renda Anual?")
   LEIA (renda_anual)
   ESCREVAl ("Digite o Numero de Dependentes?")
   LEIA (n_dependente)
   desconto <- (n_dependente * 600)
   rendaliq <- (renda_anual - desconto)
   SE rendaliq < 10000 ENTAO
      aliquota <- 0
      escreval ("Você é isento do imposto de renda")
      SENAO

      SE (rendaliq = 10000) e (rendaliq <= 30000.00) entao
         aliquota <- (rendaliq * 0,05)
         rendaliq <- (renda_anual - desconto)
         SENAO
         SE (rendaliq < 30000) e (rendaliq < 60000.00) ENTAO
            aliquota <- rendaliq * 0.010
            rendaliq <- renda_anual - desconto
         SENAO
            rendaliq => 60000 ENTAO
            aliquota <- (rendaliq * 0.015)
            rendaliq <- (renda_anual - desconto)
         senao
         FIMSE
      FIMSE
   FIMSE

   escreval("O desconto na sua folha de pagamento sera de:",rendaliq:10:3)

fimenquanto
fimalgoritmo

