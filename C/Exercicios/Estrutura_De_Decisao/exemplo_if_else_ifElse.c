#include <stdio.h>

int main() {
    int idade = 18;

    if (idade < 18) {
        printf("Menor de idade.\n");
    } else if (idade == 18) {
        printf("Tem exatamente 18 anos.\n");
    } else {
        printf("Maior de idade.\n");
    }

    return 0;
}
