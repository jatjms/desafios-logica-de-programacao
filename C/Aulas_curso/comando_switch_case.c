#include <stdio.h>

#define texto "Comandos 'Scwitch' e 'Case'."
#define texto2 "Exemplo do Programa dia da Semnana."

int main(){
    printf("%s\n", texto);
    printf("%s\n", texto2);

    int dia_semana;

    printf("Insira um valor de 1 a 7:\n");
    scanf("%d", &dia_semana);

    switch (dia_semana){
    case 1:
        printf("Domingo:\n");
        break;
    case 2:
        printf("Segunda-Feira:\n");
        break;
    case 3:
        printf("Terça-Feira:\n");
        break;
    case 4:
        printf("Quarta-Feira:\n");
        break;
    case 5:
        printf("Quinta-Feira:\n");
        break;
    case 6:
        printf("Sexta-Feira:\n");
        break;    
    case 7:
        printf("Sábado:\n");
        break;
    
    default:
        printf("Valor inválido.\n");
        break;
    }
}
