#include <stdio.h>

#define texto "Comandos IF e ELSE."

int main(){
    printf("%s\n",texto);

    float media;

    pritnf("Insira a nota:\n");
    scanf("%f", &media);

    if(media >= 7){
        printf("Aprovado(a)!\n");
    } else {
        printf("Reprovado(a)!\n");
    }
}