#include <stdio.h>

#define descricao_programacao "Conversor de temperatura Fahrenheit em  Celsius."
/*    
9. Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a 
temperatura em graus Celsius. 
        ◦ C = 5 * ((F-32) / 9). 
*/

int main(){
    printf("%s\n",descricao_programacao);

    float Fahrenheit,Celsius;
    printf("Informe a temperatura Agora em Fahrenheit.\n");
    scanf("%f",Fahrenheit);

    Celsius=5*((Fahrenheit-32)/9);

    printf("A Temperatura em Celsius é %.2f°.\n",Celsius);
}