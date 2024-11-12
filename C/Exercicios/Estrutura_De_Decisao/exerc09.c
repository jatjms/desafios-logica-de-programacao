#include <stdio.h>

#define descricao_programa "Programa que leia três números e mostre-os em ordem decrescente.\n"
//Faça um Programa que leia três números e mostre-os em ordem decrescente.

int main(){
    printf("%s",descricao_programa);

    int num1,num2,num3;

    printf("Digite 1° Número.\n");
    scanf("%d",&num1);

    printf("Digite 2° Número.\n");
    scanf("%d",&num2);

    printf("Digite 3° Número.\n");
    scanf("%d",&num3);

    //Logica descrescente
    if(num1>num2 && num1>num3 && num2>num3){

        printf("Ordem descrescente\n");
        printf("1° Número: %d.\n",num1);
        printf("2° Número: %d.\n",num2);
        printf("3° Número: %d.\n",num3);

    }
    else if(num2>num1 && num2<num3 && num1>num3){

        printf("Ordem descrescente\n");
        printf("2° Número: %d.\n",num2);
        printf("1° Número: %d.\n",num1);
        printf("3° Número: %d.\n",num3);
    }
    else if(num2>num1 && num2<num3 && num3>num1){

        printf("Ordem descrescente\n");
        printf("2° Número: %d.\n",num2);
        printf("3° Número: %d.\n",num3);
        printf("1° Número: %d.\n",num1);  

    } 
    else if(num3>num1 && num3<num2 && num2>num1){

        printf("Ordem descrescente\n");
        printf("3° Número: %d.\n",num3);
        printf("2° Número: %d.\n",num2);
        printf("1° Número: %d.\n",num1);

    }
    else if(num3>num1 && num3<num2 && num1>num2){
        
        printf("Ordem descrescente\n");
        printf("3° Número: %d.\n",num3);
        printf("1° Número: %d.\n",num1);
        printf("2° Número: %d.\n",num2);

    }
}