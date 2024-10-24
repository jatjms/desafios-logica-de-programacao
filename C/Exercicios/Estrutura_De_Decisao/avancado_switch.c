#include <stdio.h>

int main() {
    char operacao;
    float num1, num2;

    printf("Escolha a operação (+, -, *, /): ");
    scanf("%c", &operacao);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2f\n", num1 / num2);
            } else {
                printf("Erro: Divisão por zero.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}
