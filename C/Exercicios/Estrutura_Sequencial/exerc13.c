#include <stdio.h>

#define descricao_programa "algoritmo que calcule seu peso ideal, resultado para Homem e Mulher.\n"

/*
Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7 
*/
int main(){
    printf("%s",descricao_programa);

    float peso_ideal_homem, peso_ideal_mulher,altura;

    printf("Informe sua Altura.\n");
    scanf("%f",&altura);

    peso_ideal_homem = (72.7*altura) - 58;
    peso_ideal_mulher = (62.1*altura) - 44.7;

    printf("O peso ideal para Homen. %2.f \n", peso_ideal_homem);
    printf("O peso ideal para Mulher. %2.f \n", peso_ideal_mulher);

}