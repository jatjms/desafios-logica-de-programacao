#include <stdio.h>

#define texto "Comando break e continue"

int main(){
    printf("%s",texto);

    int num;

    for(num=1; num<=10;num++){
        pritntf("%d",num);
        
        if(num==5){
            break;
        }
    }

    
}