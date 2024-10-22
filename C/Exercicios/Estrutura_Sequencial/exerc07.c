#include <stdio.h>

#define descricao_programa "Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário."

int main(){
    printf("%s.\n",descricao_programa);

    float area_quadrado, ladoQuadrado,dobroQuadrado;

    printf("Informe o valor do lado de um Quadrado.\n");
    scanf("%f",&ladoQuadrado);

    area_quadrado = ladoQuadrado*ladoQuadrado;
    dobroQuadrado = area_quadrado*2;

    printf("O valor da área do Quadrado é: %f.\n",area_quadrado);
    printf("O valor dobrado da área do Quadrado é: %f.\n",dobroQuadrado);
    
}