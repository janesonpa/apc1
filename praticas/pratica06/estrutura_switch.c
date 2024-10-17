#include <stdio.h>

int main(){
    int nota = 0;
    
    printf("Entre com uma nota de 1 a 5!\n");
    scanf("%i", &nota);

    switch(nota){
case 1: printf("Voce ganhou 1!\n");
break;
case 2: printf("Voce ganhou 2!\n");
break;
case 3: printf("Voce ganhou 3!\n");
break;
case 4: printf("Voce ganhou 4!\n");
break;
case 5: printf("Voce ganhou 5!\n");
break;
default: printf("Nota invalida! Tente novamente!\n");
    }                              




    return 0;
}