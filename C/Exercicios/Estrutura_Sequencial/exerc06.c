#include <stdio.h>

#define descricao_programa "Programa que peça o raio de um círculo, calcule e mostre sua área."

int main(){
    printf("%s",descricao_programa);
    //A = π·r2

    float area_circulo, raio_circulo, pi = 3.14159;

    printf("Informe o valor do Raio de um circulo.\n");
    scanf("%f",&raio_circulo);

    area_circulo = pi * (raio_circulo*raio_circulo);

    printf("Valor da Área do Circulo é: %f.\n",area_circulo);

}