#include <stdio.h>

int main() {
    int opcao = 2;

    switch (opcao) {
        case 1:
            printf("Você escolheu 1.\n");
            break;
        case 2:
            printf("Você escolheu 2.\n");
            break;
        case 3:
            printf("Você escolheu 3.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
