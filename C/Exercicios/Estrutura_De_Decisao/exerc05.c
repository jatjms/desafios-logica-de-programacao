#include<stdio.h>

/*
Faça um programa para a leitura de duas notas parciais de um aluno. 
O programa deve calcular a média alcançada por aluno e apresentar:
A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
A mensagem "Reprovado", se a média for menor do que sete;
A mensagem "Aprovado com Distinção", se a média for igual a dez.
*/

#define descricao_programa "Programa deve calcular a média e verificar se esta Aprovado ou Reprovado. \n"

int main(){

    printf("%s",descricao_programa);
    printf("A Nota é de '0' a '10'.\n");

    float media, nota1, nota2, nota3, nota4;

    printf("Digite sua 1° Nota.\n");
    scanf("%f",&nota1);

    printf("Digite sua 2° Nota.\n");
    scanf("%f",&nota2);

    printf("Digite sua 3° Nota.\n");
    scanf("%f",&nota3);

    printf("Digite sua 4° Nota.\n");
    scanf("%f",&nota4);

    if(nota1>10){

    }
    media = (nota1+nota2+nota3+nota4)/4;
 
    if(media>=7){
        printf("O Total de sua média é %.2f",media);
        printf(", Aluno(a) 'Aprovado'.\n");

    } else if(media<7){
        printf("O Total de sua média é %.2f ",media);
        printf(", Aluno(a) 'Reprovado', deveria estudar mais.\n");
    } else {
        printf("O Total de sua média é %.2f ",media);
        printf(", Aluno(a) 'Aprovado Com Louvor' Parabéns.\n");
    }    
 
}
