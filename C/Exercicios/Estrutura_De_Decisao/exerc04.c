#include<stdio.h>

#define descricao_programa "Faça um Programa que verifique se uma letra digitada é vogal ou consoante."

int main(){

    char letra;

    printf("Digite uma Letra.\n");
    scanf(" %c", &letra);  // O espaço antes de %c é importante para ler qualquer caractere

    // Verificando se a letra é uma vogal maiúscula ou minúscula
    switch(letra){
        case 'a':
        case 'A':
            printf("A Letra digitada e uma vogal.\n");
            break;
        case 'e':
        case 'E':
            printf("A Letra digitada e uma vogal.\n");
            break;
        case 'i':
        case 'I':
            printf("A Letra digitada e uma vogal.\n");
            break;
        case 'o':
        case 'O':
            printf("A Letra digitada e uma vogal.\n");
            break;
        case 'u':
        case 'U':
            printf("A Letra digitada e uma vogal.\n");
            break;
        default:
            // Se não for uma vogal, pode ser uma consoante ou caractere inválido
            if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
                printf("A Letra digitada e uma consoante.\n");
            } else {
                printf("Dados informados invalidos.\n");
            }
            break;
    }

    return 0;
}