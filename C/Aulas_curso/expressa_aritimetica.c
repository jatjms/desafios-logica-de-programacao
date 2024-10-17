#include <stdio.h>

#define texto "Programa Expressão Aritmética."

int main(){
    printf("%s\n",texto);
    
    int A, B, soma, subritacao, multiplicacao, divisao;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);

    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subritacao = A - B;
    multiplicacao = A * B;
    divisao = A/B;

    printf("Resultados:\n");
    printf("Soma:%d.\n",soma);
    printf("Subritação:%d.\n",subritacao);
    printf("Multiplicação:%d.\n",multiplicacao);
    printf("Divisão:%d.\n",divisao);
    
}