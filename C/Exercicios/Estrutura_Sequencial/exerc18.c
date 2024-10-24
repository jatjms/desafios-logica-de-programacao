#include <stdio.h>

#define descricao_programa "Programa que peça o tamanho de um arquivo para download (em MB).\n"

/* 
    Faça um programa que peça o tamanho de um arquivo para download (em MB) e a 
    velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos). 
*/

int main(){
    printf("%s",descricao_programa);

    float tempoVelocidade, tamanhoArquivo, linkInternet, converTempo;

    printf("Informe o tamanho do arquivo que será baixado.\n");
    scanf("%f",&tamanhoArquivo);

    printf("Qual a Velocidade de sua Internet?\n");
    scanf("%f", &linkInternet);

    tempoVelocidade = tamanhoArquivo/linkInternet;
    converTempo = tempoVelocidade / 60;

    printf("Para este arquivo será preciso de %2.f",converTempo);
    printf(" Minutos\n");

}
