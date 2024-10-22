#include <stdio.h>

#define descricao_programa "Programa para calcular horas de trabalho."
/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês.*/ 

int main(){
    printf("%s.\n",descricao_programa);

    float valorHoraTrabalho, totalHorasMes, calculeAReceber,calcSemana1, calcSemana2, calcSemana3,calcSemana4; 
    int semana1, semana2,semana3, semana4;

    printf("Informe quanto é sua Hora de Trabalho.\n");
    scanf("%f", &valorHoraTrabalho);

    printf("Informe quantas Horas de Trabalho foi realizado na 1° Semana.\n");
    scanf("%d", &semana1);
    printf("Informe quantas Horas de Trabalho foi realizado na 2° Semana.\n");
    scanf("%d", &semana2);
    printf("Informe quantas Horas de Trabalho foi realizado na 3° Semana.\n");
    scanf("%d", &semana3);
    printf("Informe quantas Horas de Trabalho foi realizado na 4° Semana.\n");
    scanf("%d", &semana4);

    // Calcula o valor que recebe de cada Semana:
    calcSemana1 = valorHoraTrabalho * semana1; 
    calcSemana2 = valorHoraTrabalho * semana2; 
    calcSemana3 = valorHoraTrabalho * semana3;
    calcSemana4 = valorHoraTrabalho * semana4;

    //Calcula o valor total a receber no Mês:
    totalHorasMes = semana1+semana2+semana3+semana4;
    calculeAReceber = totalHorasMes*valorHoraTrabalho;

    

    printf("Valor a receber na 1° Semana R$ %.2f.\n",calcSemana1);
    printf("Valor a receber na 2° Semana R$ %.2f.\n",calcSemana2);
    printf("Valor a receber na 3° Semana R$ %.2f.\n",calcSemana3);
    printf("Valor a receber na 4° Semana R$ %.2f.\n",calcSemana4);

    printf("\n");
    printf("O Total à Receber no mês é R$ %.2f.\n",calculeAReceber);
    
}