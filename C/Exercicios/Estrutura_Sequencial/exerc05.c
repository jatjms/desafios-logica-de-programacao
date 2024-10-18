#include <stdio.h>
#define descricao_programa "Faça um Programa que converta metros para centímetros."

int main(){
    printf("%s\n",descricao_programa);

    float  metros, conversao;

    printf("Informe um valor em Metros.\n");
    scanf("%f",&metros);

    conversao = metros*100;

    printf("O Valor em Centimétro é:%f.\n", conversao);

}