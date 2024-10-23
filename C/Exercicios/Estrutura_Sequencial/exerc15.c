#include <stdio.h>

#define descricao_programa "Programa que calcula Salário Líquido.\n"

/*
    Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
    Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o 
    Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:

    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
    calcule os descontos e o salário líquido, conforme a tabela abaixo:

    + Salário Bruto : R$
    - IR (11%) : R$
    - INSS (8%) : R$
    - Sindicato ( 5%) : R$
    = Salário Liquido : R$

    Obs.: Salário Bruto - Descontos = Salário Líquido. 
*/

int main(){
    printf("%s",descricao_programa);

    float salarioBruto, ir, inss, sindicato, salarioLiquido, descontos;

    printf("Informe o valor de seu Salário Bruto sem descontos.\n");
    scanf("%f",&salarioBruto);

    ir = ((salarioBruto*11)/100);
    inss = ((salarioBruto*8)/100);
    sindicato = ((salarioBruto*5)/100);

    descontos = ir + inss + sindicato;

    salarioLiquido = salarioBruto - descontos;

    printf("O valor de seu Salário Líquido é de R$ %2.f \n", salarioLiquido);

}