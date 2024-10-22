#include <stdio.h>

#define descricao_programacao "Algoritmo que calcule seu peso ideal\n"

/*
Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo 
que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58 
*/
int main(){
    printf("%s",descricao_programacao);

    float altura,peso_ideal;

    printf("Informe qual sua Altura.\n");
    scanf("%f",&altura);

    peso_ideal = (72.7*altura) - 58;

    printf("Seu peso Ideal deve ser: %2.f \n",peso_ideal);
}