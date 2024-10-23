#include <stdio.h>
#include <math.h>

#define DESCRICAO_PROGRAMA "Programa para uma loja de tintas.\n"
    /*
    Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da 
    tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que 
    custam R$ 25,00.

    Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
    comprar apenas latas de 18 litros;
    comprar apenas galões de 3,6 litros;
    misturar latas e galões, de forma que o desperdício de tinta seja menor. Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, 
    considere latas cheias. 
    */

int main() {
    printf("%s", DESCRICAO_PROGRAMA);

    float precoGalao = 25.0, precoTinta = 80.0;
    float litroPorMetroQuadrado = 1.0 / 6.0; // 1 litro cobre 6 m²
    float galaoLitros = 3.6, lataLitros = 18.0;
    int metroComodo;

    printf("Informe o tamanho do cômodo em metros quadrados:\n");
    scanf("%d", &metroComodo);

    // Calcular a quantidade total de tinta necessária com 10% de folga
    float litrosNecessarios = metroComodo * litroPorMetroQuadrado;
    litrosNecessarios *= 1.1; // Adiciona 10% de folga

    // Cálculo para apenas latas
    int qtdLatas = ceil(litrosNecessarios / lataLitros);
    float precoFinalLatas = qtdLatas * precoTinta;

    // Cálculo para apenas galões
    int qtdGaloes = ceil(litrosNecessarios / galaoLitros);
    float precoFinalGaloes = qtdGaloes * precoGalao;

    // Cálculo para mistura de latas e galões
    int qtdLatasMistura = litrosNecessarios / lataLitros; // Quantidade de latas
    float litrosRestantes = litrosNecessarios - (qtdLatasMistura * lataLitros); // Litros que sobram
    int qtdGaloesMistura = ceil(litrosRestantes / galaoLitros); // Galões para o restante

    float precoFinalMistura = (qtdLatasMistura * precoTinta) + (qtdGaloesMistura * precoGalao);

    // Resultados
    printf("Será necessário de %d latas de tinta.\n", qtdLatas);
    printf("O preço que vai ser gasto é de R$ %.2f.\n", precoFinalLatas);
    printf("============================================================\n");
    printf("Será necessário de %d galões de tinta.\n", qtdGaloes);
    printf("O preço que vai ser gasto é de R$ %.2f.\n", precoFinalGaloes);
    printf("============================================================\n");
    printf("Mistura: Será necessário de %d latas e %d galões de tinta.\n", qtdLatasMistura, qtdGaloesMistura);
    printf("O preço que vai ser gasto é de R$ %.2f.\n", precoFinalMistura);

    return 0;
}
