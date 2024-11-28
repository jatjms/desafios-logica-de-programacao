#include <stdio.h>

#define descricao_programa "Programa que Calcule a Média e o conceito de um Aluno.\n"
/*
    Faça um programa que lê as 4 notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
  Média de Aproveitamento  Conceito
  Entre 9.0 e 10.0        A
  Entre 7.5 e 9.0         B
  Entre 6.0 e 7.5         C
  Entre 4.0 e 6.0         D
  Entre 4.0 e zero        E
O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
*/

int main(){
    printf("%s", descricao_programa);

    char nome_aluno[250];
    float nota1,nota2,nota3,nota4,media;
    
    printf("Informe o nome do Aluno(a).\n");
    fgets(nome_aluno, sizeof(nome_aluno), stdin); // Captura o nome corretamente, incluindo espaços
    
    printf("Informe a 1° nota do Aluno(a).\n");
    scanf("%f",&nota1);

    printf("Informe a 2° nota do Aluno(a).\n");
    scanf("%f",&nota2);

    printf("Informe a 3° nota do Aluno(a).\n");
    scanf("%f",&nota3);

    printf("Informe a 4° nota do Aluno(a).\n");
    scanf("%f",&nota4);

    media =(nota1+nota2+nota3+nota4)/4;

    

    if(media > 9 && media <=10)
    {
        printf("Aluno(a), %s  você esta ",nome_aluno);
        printf("'Aprovado'.");
        printf("conceito 'A'.\n");

    }

    else if(media > 7.5 && media <= 9)
    {
        printf("Aluno(a), %s,  você esta, ",nome_aluno);
        printf("'Aprovado'. ");
        printf("Conceito 'B'.");
    }

    else if(media > 6 && media <= 7.5)
    {
        printf("Aluno(a), %s  você esta ",nome_aluno);
        printf("'Aprovado'. ");
        printf("Conceito 'C'.");
    }

    else if(media > 4 && media <= 6)
    {
        printf("Aluno(a), %s  você esta ",nome_aluno);
        printf("'Reprovado'. ");
        printf("Conceito 'D'.");
    }

    else if (media >= 0 && media <= 4)
    {
        printf("Aluno(a), %s  você esta ",nome_aluno);
        printf("'Reprovado'. ");
        printf("Conceito 'E'.");
    }

    else {
        printf("Dados inseridos estão incorretos, reinicie o sistema.\n");
    }

    return 0;
}
