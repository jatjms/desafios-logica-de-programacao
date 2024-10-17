#include <stdio.h>

#define texto "Programa que peça um número e então mostre a mensagem O número informado foi [número]\n\n"

int main(){
    //Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número]
    printf("%s",texto);

    int num;

    printf("Digite um número.\n");
    scanf("%d", &num);

    printf("O número informado foi: %d. \n ", num);

}
