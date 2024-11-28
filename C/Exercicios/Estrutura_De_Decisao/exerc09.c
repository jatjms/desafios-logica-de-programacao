/* #include <stdio.h>

#define descricao_programa "Programa que leia três números e mostre-os em ordem decrescente.\n"
//Faça um Programa que leia três números e mostre-os em ordem decrescente.

int main(){
    printf("%s",descricao_programa);

    int num1,num2,num3;

    printf("Digite 1° Número.\n");
    scanf("%d",&num1);

    printf("Digite 2° Número.\n");
    scanf("%d",&num2);

    printf("Digite 3° Número.\n");
    scanf("%d",&num3);

    //Logica descrescente
    if(num1>num2 && num1>num3 && num2>num3){

        printf("Ordem descrescente\n");
        printf("1° Número: %d.\n",num1);
        printf("2° Número: %d.\n",num2);
        printf("3° Número: %d.\n",num3);

    }
    else if(num2>num1 && num2<num3 && num1>num3){

        printf("Ordem descrescente\n");
        printf("2° Número: %d.\n",num2);
        printf("1° Número: %d.\n",num1);
        printf("3° Número: %d.\n",num3);
    }
    else if(num2>num1 && num2<num3 && num3>num1){

        printf("Ordem descrescente\n");
        printf("2° Número: %d.\n",num2);
        printf("3° Número: %d.\n",num3);
        printf("1° Número: %d.\n",num1);  

    } 
    else if(num3>num1 && num3<num2 && num2>num1 && num2<num3){

        printf("Ordem descrescente\n");
        printf("3° Número: %d.\n",num3);
        printf("2° Número: %d.\n",num2);
        printf("1° Número: %d.\n",num1);

    }
    else if(num3>num1 && num3<num2 && num1>num2){

        printf("Ordem descrescente\n");
        printf("3° Número: %d.\n",num3);
        printf("1° Número: %d.\n",num1);
        printf("2° Número: %d.\n",num2);

    }
}*/

#include <stdio.h>

#define descricao_programa "Programa que leia três números e mostre-os em ordem decrescente.\n"

int main() {
    // 1. Exibe uma descrição do programa para o usuário
    printf("%s", descricao_programa);

    int num1, num2, num3;

    // 2. Solicita ao usuário que insira os três números
    printf("Digite 1° Número: ");
    scanf("%d", &num1);  // Lê o primeiro número e armazena em 'num1'

    printf("Digite 2° Número: ");
    scanf("%d", &num2);  // Lê o segundo número e armazena em 'num2'

    printf("Digite 3° Número: ");
    scanf("%d", &num3);  // Lê o terceiro número e armazena em 'num3'

    // 3. Declara três variáveis para armazenar os números ordenados
    int maior, meio, menor;

    // 4. Determina qual é o maior, o meio e o menor número entre os três fornecidos

    // Verifica se o 'num1' é o maior número
    if (num1 >= num2 && num1 >= num3) {  
        maior = num1;  // 'num1' é o maior

        // Verifica qual número é o maior entre 'num2' e 'num3' para definir o 'meio' e 'menor'
        if (num2 >= num3) {  
            meio = num2;    // 'num2' é maior ou igual a 'num3', então 'num2' é o meio
            menor = num3;   // 'num3' é o menor
        } else {
            meio = num3;    // 'num3' é maior, então 'num3' é o meio
            menor = num2;   // 'num2' é o menor
        }
    }
    // Verifica se o 'num2' é o maior número
    else if (num2 >= num1 && num2 >= num3) {
        maior = num2;  // 'num2' é o maior

        // Verifica qual número é o maior entre 'num1' e 'num3' para definir o 'meio' e 'menor'
        if (num1 >= num3) {  
            meio = num1;    // 'num1' é maior ou igual a 'num3', então 'num1' é o meio
            menor = num3;   // 'num3' é o menor
        } else {
            meio = num3;    // 'num3' é maior, então 'num3' é o meio
            menor = num1;   // 'num1' é o menor
        }
    }
    // Caso o 'num3' seja o maior número
    else {
        maior = num3;  // 'num3' é o maior

        // Verifica qual número é o maior entre 'num1' e 'num2' para definir o 'meio' e 'menor'
        if (num1 >= num2) {  
            meio = num1;    // 'num1' é maior ou igual a 'num2', então 'num1' é o meio
            menor = num2;   // 'num2' é o menor
        } else {
            meio = num2;    // 'num2' é maior, então 'num2' é o meio
            menor = num1;   // 'num1' é o menor
        }
    }

    // 5. Exibe os números em ordem decrescente
    printf("Ordem decrescente: \n");
    printf("1° Número: %d\n", maior);  // Exibe o maior número
    printf("2° Número: %d\n", meio);   // Exibe o número do meio
    printf("3° Número: %d\n", menor);  // Exibe o menor número

    return 0;  // Finaliza o programa
}
