#include <stdio.h>

#define descricao_progama "Programa que peça dois números e imprima o maior deles.\n"
//Faça um Programa que peça dois números e imprima o maior deles.

int main(){
    printf("%s",descricao_progama);

    int num1,num2;

    printf("Informe o 1° Número.\n");
    scanf("%d",&num1);

    pirntf("Informe o 2° Número.\n");
    scanf("%d",&num2);

    if (num1>num2){
        
        printf("O 1° Número %d",num1);
        printf("é maior que o 2° Número %d \n",num2);

    }else{

        printf("O 2° Número %d",num2);
        printf("é maior que o 1° Número %d \n",num1);
    }
}