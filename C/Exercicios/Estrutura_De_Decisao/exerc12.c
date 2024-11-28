#include<stdio.h>

#define descricao_programa "Programa para o cálculo de uma folha de pagamento.\n"
/*
Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do 
Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que o 
FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita). 
O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora 
e a quantidade de horas trabalhadas no mês.

Desconto do IR:
Salário Bruto até 900 (inclusive) - isento
Salário Bruto até 1500 (inclusive) - desconto de 5%
Salário Bruto até 2500 (inclusive) - desconto de 10%
Salário Bruto acima de 2500 - desconto de 20% 

Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.
*/

int main(){
    printf("%s",descricao_programa);

    float salarioBruto, inss, ir, sindicato, fgts, desconto, salarioLiquido, ir_desconto;

    /*
    0900 = 1412
    1500 = 2100
    2500 = 3500
    */
    
    printf("Informe o valor de seu Salário sem descontos.\n\n");
    scanf("%f",&salarioBruto);

    /*
    sindicato = 3%;
    FGTS = 11%;
    IR = DEPENDE DO VALOR DO SALARIO;
    INSS = 10%;
    */
   sindicato = salarioBruto - (salarioBruto - (salarioBruto*3)/100);
   fgts = salarioBruto - (salarioBruto - (salarioBruto*11)/100);
   inss = salarioBruto - (salarioBruto - (salarioBruto*10)/100);
   desconto = sindicato + fgts + inss;

   if(salarioBruto <=1412){
    // ir = salarioBruto - (salarioBruto*(0/100));
     salarioLiquido = salarioBruto - desconto;

     printf("Devido o valor de seu salário o IR(Imposto de Renda), não será  descontato.\n\n");
     printf("O valor que ira cair na sua conta é de R$ %.2f \n\n",salarioLiquido);     

   }

   else if (salarioBruto > 1412 && salarioBruto <= 2100)
   {
     ir = salarioBruto - (salarioBruto*5)/100;
     ir_desconto = salarioBruto - ir;
     salarioLiquido = salarioBruto - desconto - ir_desconto;

     printf("Devido o valor de seu salário o IR(Imposto de Renda), será  descontato o valor de R$ %.2f.\n\n", ir_desconto);
     printf("O valor que ira cair na sua conta é de R$ %.2f \n\n",salarioLiquido);

   }
   
   else if(salarioBruto > 2100 && salarioBruto <= 3500 )
   {
    ir = salarioBruto - ((salarioBruto*10)/100);
    ir_desconto = salarioBruto - ir;
    salarioLiquido = salarioBruto - desconto - ir_desconto;

     printf("Devido o valor de seu salário o IR(Imposto de Renda), será  descontato o valor de R$ %.2f.\n\n", ir_desconto);
     printf("O valor que ira cair na sua conta é de R$ %.2f \n\n",salarioLiquido);

   } 
   
   else if (salarioBruto > 3500)
   {
    ir = salarioBruto - ((salarioBruto*20)/100);
    ir_desconto = salarioBruto - ir;
    salarioLiquido = salarioBruto - desconto - ir_desconto;

     printf("Devido o valor de seu salário o IR(Imposto de Renda), será  descontato o valor de R$ %.2f.\n\n", ir_desconto);
     printf("Desconto Sindicato R$ %.2f.\n\n", sindicato);
     printf("Desconto FGTS R$ %.2f.\n\n", fgts);
     printf("Desconto INSS R$ %.2f.\n\n", inss);
     printf("Total Desconto R$ %.2f.\n\n", desconto);
     printf("==================================================================\n");
     printf("O valor que ira cair na sua conta é de R$ %.2f \n\n",salarioLiquido);
   } 

   else 
   {
    printf("Dados inseridos incorretos veja sua lógica do seu programa.\n\n");
   }

}