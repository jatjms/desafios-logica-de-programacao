#include <stdio.h>

#define descricao_programa "Conversa de Pescador. \n"

/*
    João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o 
    rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior 
    que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) 
    deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um 
    programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável 
    excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. 
    Imprima os dados do programa com as mensagens adequadas.
*/
int main(){
    printf("%s",descricao_programa);

    float peso_peixe, imposto, calculo_peixe;

    printf("Informe o valor que foi pescado neste dia.\n");
    scanf("%f",&peso_peixe);

    calculo_peixe = (peso_peixe - 50);
    imposto = calculo_peixe * 4;

    printf("O Valor de imposto a ser pago é de R$ %2.f \n", imposto); 
}