#include <stdio.h>

#define texto "Comandos Do-While.\n"

int main(){
    printf("%s\n",texto);

    int num=1;

    do{
        printf("%d", num);
        num++;
    }while(num <= 10);
    
}