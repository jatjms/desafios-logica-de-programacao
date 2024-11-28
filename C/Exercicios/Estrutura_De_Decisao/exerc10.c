#include <stdio.h>

#define descricao_programa "Programa que pergunte em que turno você estuda.\n"
/*  Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.     
    Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/

int main(){
    printf("%s",descricao_programa);

    char turno;

    printf("Digite 'M' para turno 'matutino', 'V' para o turno 'Vespertino' e 'N' para o turno Noturno. \n");
    scanf("%s",&turno);

    switch (turno)
    {
    case 'M':
    case 'm':
        printf("Bom Dia!! Seja Bem vindo!!\n");
        break;
    case 'V':
    case 'v':
        printf("Boa Tarde!! Seja Bem vindo!!\n");
        break;
    case 'N':
    case 'n':
        printf("Boa Noite!! Seja Bem vindo!!\n");
        break;
    
    default:
        printf("Valor Inválido!");
        break;
    }
}