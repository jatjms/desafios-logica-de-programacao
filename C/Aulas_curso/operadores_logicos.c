#include <stdio.h>

#define texto1 "** Operadores Lógicos: ***"
#define texto2 "Conjução ('e' lógico): &&."
#define texto3 "Dijunção ('ou' lógico): ||."
#define texto4 "Conjução (negação -'não lógico'): !."

int main(){
    printf("%s\n", texto1);
    printf("%s\n", texto2);
    printf("%s\n", texto3);
    printf("%s\n", texto4);

    float media;

    printf("Insira uma nota:\n");
    scnaf("%f", &media);

    if(media >= 4 && media < 7){
        printf("Tem direito a exame!\n");
    }

}