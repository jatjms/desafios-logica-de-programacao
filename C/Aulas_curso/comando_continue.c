#include <stdio.h>

#define texto "Comando continue"

int main(){
    printf("%s", texto);

    int num;

    for(num=1; num <=10; num++){
        if(num == 5){
            /*ignora a condição no caso não aperce o
            número 5, pois a condição colocou esta condição.
            */ 
            continue;
        }
        printf("%d", num);
    }

}