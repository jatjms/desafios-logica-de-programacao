#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 7;

    if (a > b && a > c) {
        printf("A é o maior número.\n");
    } else if (b > a && b > c) {
        printf("B é o maior número.\n");
    } else if (c > a && c > b) {
        printf("C é o maior número.\n");
    } else {
        printf("Os números são iguais ou inválidos.\n");
    }

    return 0;
}
