#include <stdio.h>

#define texto "Estrutura de Decisão simples (IF)."

int main(){
    printf("%s\n", texto);
    
    float media;

    printf("Insira a nota:\n");
    scanf("%f",&media);

    if(media >= 7){
        printf("Aprovado(a)!\n");
    }
}