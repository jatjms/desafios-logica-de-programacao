#include <stdio.h>

#define descricao_programa "Faça um Programa que peça as 4 notas bimestrais e mostre a média.\n"

int main(){
    printf("%s",descricao_programa);

    float media_nota, nota1, nota2,nota3, nota4;

    printf("Informe o valor da 1° nota.\n");
    scanf("%f",&nota1);

    printf("Informe o valor da 2° nota.\n");
    scanf("%f", &nota2);

    printf("Informe o valor da 3° nota.\n");
    scanf("%f", &nota3);

    printf("Informe o valor da 4° nota.\n");
    scanf("%f", &nota4);

    media_nota = (nota1+nota2+nota3+nota4)/4;

    printf("Sua média é: %f.\n", media_nota);
}