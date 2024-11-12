#include <stdio.h>

#define descricao_programa "Programa que leia três números e mostre o maior e o menor deles.\n"
//Faça um Programa que leia três números e mostre o maior e o menor deles.

int main(){
    printf("%s",descricao_programa);

    int num1,num2,num3;

    printf("Digite 1° Número.\n");
    scanf("%d",&num1);

    printf("Digite 2° Número.\n");
    scanf("%d",&num2);

    printf("Digite 3° Número.\n");
    scanf("%d",&num3);

    // Maior Numero
   if(num1>num2 && num1>num3){
        printf("O 1° Número %d ", num1);
        printf(" é o 'Maior' número dos 3 informados.\n");

    }else if(num2>num1 && num2>num3){
        printf("O 2° Número %d ", num2);
        printf(" é o 'Maior' número dos 3 informados.\n");
        
    }else{
        printf("O 3° Número %d ", num3);
        printf(" é o 'Maior' número dos 3 informados.\n");
    }

    // Menor Numero
    if(num1<num2 && num1<num3){
        printf("O 1° Número %d ", num1);
        printf(" é o 'Menor' número dos 3 informados.\n");

    }else if(num2<num1 && num2<num3){
        printf("O 2° Número %d ", num2);
        printf(" é o 'Menor' número dos 3 informados.\n");
        
    }else{
        printf("O 3° Número %d ", num3);
        printf(" é o 'Menor' número dos 3 informados.\n");
    }

    return 0;

}