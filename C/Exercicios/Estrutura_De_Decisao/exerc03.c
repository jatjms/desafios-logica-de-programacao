#include <stdio.h>

#define descricao_programa "Programa que veriﬁque se uma letra digitada é 'F' ou 'M'.\n\n"
/*
    Faça um Programa que veriﬁque se uma letra digitada é "F" ou "M". 
    Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
*/

int main(){
    printf("%s",descricao_programa);

    char descricaoSexualidade;
    char descricaoOutros[250];

    printf("====================================\n");
    printf("Digite sempre Letras e Maiúscula.\n");
    printf("====================================\n\n");

    printf("Informe como se define sua sexualidade: Feminimo(F), Masculino(M) e Demias(O).\n");
    scanf("%C",&descricaoSexualidade);
   
   printf("====================================\n");
    switch (descricaoSexualidade)
    {
    
    case 'F':
        printf("Você se identifica como sendo do Sexo 'Feminino.'\n\n");
        break;
    
    case 'M':
        printf("Você se identifica como sendo do Sexo 'Masculino.'\n\n");
        break;
    
    case 'O':
        printf("Descreva como se indentifica sua sexualidade.'\n\n");
        scanf("%s",&descricaoOutros);

        printf("====================================\n");
        printf("Você se identifica como sendo %s.'\n\n",descricaoOutros);
        break;
    
    default:
        printf("Dados informados incorreto reinicie o Programa.\n");
        break;
    }
    printf("Obrigado pela sua participação. \n\n");

}