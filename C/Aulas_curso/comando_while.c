#include <stdio.h>

#define texto "Comando While (laços de reperição)."
// aula 12.

int main(){
    printf("%s\n", texto);

    int num=1;
    while (num <= 10)
    {
        printf("%d.\n", num);
        num++;
    }
    printf("Fim do Sistema.\n");
}