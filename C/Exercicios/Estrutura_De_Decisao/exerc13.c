#include <stdio.h>

#define descricao_programa "Programa que leia um número e exiba o dia correspondente da semana.\n"

//Faça um Programa que leia um número e exiba o dia correspondente da semana. 
//(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

int main(){
    printf("%s",descricao_programa);

    int dia_semana;

    printf("Informe o dia da semana conforme o numeral de 1 até 7.");
    scanf("%d",&dia_semana);

    switch (dia_semana)
    {
    case 1:
        printf("Hoje é Domingo");
        break;
    case 2:
        printf("Hoje é Segunda-Feira.");
        break;
    case 3:
        printf("Hoje é Terça-Feira.");
        break;
    case 4:
        printf("Hoje é Quarta-Feira.");
        break;
    case 5:
        printf("Hoje é Quinta-Feira.");
        break;
    case 6:
        printf("Hoje é Sexta-Feira.");
        break;
    case 7:
        printf("Hoje é Sábado.");
        break;
    default:
        printf("Data informada.");
        break;
    }

}