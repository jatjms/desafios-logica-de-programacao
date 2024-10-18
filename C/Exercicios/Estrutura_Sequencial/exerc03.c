#include <stdio.h>

#define descricao_programa "Faça um Programa que peça dois números e imprima a soma."

int main(){
    printf("%s\n",descricao_programa);

    int soma, num1, num2;

    printf("Digite o 1° número.\n");
    scanf("%d",&num1);

    printf("Digite 2° número.\n");
    scanf("%d",&num2);

    soma = num1+num2;

    printf("A soma dos números informados e: %d. \n",soma);

}