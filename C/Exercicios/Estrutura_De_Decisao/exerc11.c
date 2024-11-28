#include <stdio.h>

#define descricao_programacao "Programa que reajuste salario.\n"
/*
As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.
*/

int main(){
    printf("%s",descricao_programacao);

    float salario_atual,reajuste, salario_reajuste; 

    printf("Informe o valor de seu salario atual.\n");
    scanf("%f",&salario_atual);

    //vou atulizar para salário minímo de 2024 que é R$ 1,412,00
    if(salario_atual <= 1412)
    {
        reajuste = (salario_atual*20)/100;
        salario_reajuste = salario_atual + reajuste;

        printf("Seu salário atual é R$ %.2f ",salario_atual);
        printf(", com reajuste tera 20 porcento de aumento e irá passar a ser de R$ %.2f \n",salario_reajuste);
    }

    else if (salario_atual> 1412 && salario_atual <= 1832)
    {
        reajuste = (salario_atual*15)/100;
        salario_reajuste = salario_atual + reajuste;

        printf("Seu salário atual é R$ %.2f ",salario_atual);
        printf(", com reajuste tera 15 porcento de aumento e irá passar a ser de R$ %.2f. \n",salario_reajuste);
    }

    else if(salario_atual > 1832 && salario_atual < 2632)
    {
        reajuste = (salario_atual*10)/100;
        salario_reajuste = salario_atual + reajuste;

        printf("Seu salário atual é R$ %.2f ",salario_atual);
        printf(", com reajuste tera 10 porcento de aumento e irá passar a ser de R$ %.2f. \n",salario_reajuste);

    }

    else
    {
        reajuste = (salario_atual*5)/100;
        salario_reajuste = salario_atual + reajuste;

        printf("Seu salário atual é R$ %.2f ",salario_atual);
        printf(", com reajuste tera 5 porcento de aumento e irá passar a ser de R$ %.2f. \n",salario_reajuste);
    }

    
}
