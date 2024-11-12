#include <stdio.h>

#define descricao_programa "Programa para achar o menor preço. \n"
//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

int main(){
    printf("%s",descricao_programa);

    float preco1,preco2,preco3;

    printf("Qual o valor do 1° produto.\n");
    scanf("%f",&preco1);

    printf("Qual o valor do 2° produto.\n");
    scanf("%f",&preco2);

    printf("Qual o valor do 3° produto.\n");
    scanf("%f",&preco3);

    if(preco1<preco2 && preco1<preco3){
        printf("O Valor do 1° Preço %.2f ", preco1);
        printf(" é o 'Menor' dos Preço dos 3 informados.\n");

    }else if(preco2<preco1 && preco2<preco3){
        printf("O Valor do 2° Preço R$ %.2f ", preco2);
        printf(" é o 'Menor' dos Preço dos 3 informados.\n");

    }else {
        printf("O Valor do 3° Preço R$ %.2f ", preco3);
        printf(" é o 'Menor' dos Preço dos 3 informados.\n");
    }


}