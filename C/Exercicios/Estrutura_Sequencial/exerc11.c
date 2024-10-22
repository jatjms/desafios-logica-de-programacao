#include <stdio.h>

#define descricao_programa "Programa que peça 2 números inteiros e um número real.\n"

/*
    Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
    a. o produto do dobro do primeiro com metade do segundo .
    b. a soma do triplo do primeiro com o terceiro.
    c. o terceiro elevado ao cubo.
*/
int main(){
    printf("%s",descricao_programa);
    
    int num1, num2;
    float num3, a, b, c;

    pritnf("Informe o 1° número,\n");
    scanf("%d",&num1);

    pritnf("Informe o 2° número.\n");
    scanf("%d",&num2);

    printf("Informe o 3° número.\n");
    scanf("%f",num3);

    a = (num1*2)+(num2/2);
    b = (num1*3)+num3;
    c = (num3*num3*num3);

    printf("O produto do dobro do primeiro com metade do segundo. %2.f.\n",a);
    printf("A soma do triplo do primeiro com o terceiro. %2.f.\n",b);
    printf("o terceiro elevado ao cubo. %2.f.\n",c);

}