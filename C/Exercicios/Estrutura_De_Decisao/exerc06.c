#include <stdio.h>

#define descricao_programa "Programa que leia três números e mostre o maior deles.\n"
//Faça um Programa que leia três números e mostre o maior deles.

int main(){
    printf("%s",descricao_programa);

    int num1, num2, num3;

    printf("Digite o 1° Número.\n");
    scanf("%d",&num1);

    printf("Digite o 2° Número.\n");
    scanf("%d",&num2);

    printf("Digite o 3° Número.\n");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("O 1° Número %d ", num1);
        printf(" é o maior número dos 3 informados.\n");

    }else if(num2>num1 && num2>num3){
        printf("O 2° Número %d ", num2);
        printf(" é o maior número dos 3 informados.\n");
        
    }else{
        printf("O 3° Número %d ", num3);
        printf(" é o maior número dos 3 informados.\n");
    }

}