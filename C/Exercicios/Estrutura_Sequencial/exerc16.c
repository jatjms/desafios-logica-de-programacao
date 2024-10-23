#include <stdio.h>
#include <math.h>

#define descricao_programa "Programa para uma loja de tintas.\n"

/*
    Faça um programa para uma loja de tintas. O programa deverá pedir o 
    tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da 
    tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, 
    que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total. 
*/


int main(){
    printf("%s", descricao_programa);

    float lataTinta, qtdLatas, litroTinta, custoTinta, tamanhoComodo, precoFinal;

    printf("Informe o Tamanho do comodo em Metros quadrado, \n");
    printf("para sabermos o quantas latas de tintas são necessarias. \n");
    scanf("%f", &tamanhoComodo);

    lataTinta = 18;
    custoTinta = 80;

    litroTinta = tamanhoComodo/3;
    qtdLatas = lataTinta/litroTinta;

    // Arredondar qtdLatas e precoFinal
    qtdLatas = round(qtdLatas);
    precoFinal = custoTinta * qtdLatas;
    

    printf("Será necessário de %0.f ",qtdLatas);
    printf("Latas de Tinta. \n");
    printf("\n");
    printf("O preço que vai ser gasto é de R$ %2.f .\n",precoFinal);

     return 0;
    /*
        Codifo de compilação 
        gcc -o exerc16 exerc16.c -lm  
    */
}