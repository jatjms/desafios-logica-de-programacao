#include <stdio.h>

#define descricao_programa "Conversor de temperatura Celsius para Fahrenheit.\n"
/*
Faça um Programa que peça a temperatura em graus 
Celsius, transforme e mostre em graus Fahrenheit.
Formula: F = C x 1.8 + 32
*/

int main(){
    printf("%s",descricao_programa);

    float Fahrenheit,Celsius;

    printf("Informe a temperatura Agora em Celsius.\n");
    scanf("%f",&Celsius);

     Fahrenheit = (Celsius* 1.8) + 32;
     
    printf("A Temperatura em Fahrenheit é %.2f°.\n",Fahrenheit);
}