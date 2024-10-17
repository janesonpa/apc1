#include <stdio.h>

int main(){
    // int nota = 0;


    // printf ("Entre com uma nota de 1 a 5:");
    // scanf("%i", &nota);

    // if (nota == 1){
    //     printf("Voce ganhou 1 estrela!\n");
    // } else if (nota == 2){
    //     printf("Voce ganhou 2 estrelas!\n");
    // } else if (nota == 3){
    //     printf("Voce ganhou 3 estrelas!\n");
    // } else if (nota == 4){
    //     printf("Voce ganhou 4 estrelas!\n");
    // } else if (nota == 5){
    //     printf("Voce ganhou 5 estrelas!\n");
    // } else {
    //     printf("Nota invalida!\n");
    // }

    // switch (nota){
    //     case 1: printf("Voce ganhou 1 estrela!\n");
    //     break;
    //     case 2: printf("Voce ganhou 2 estrelas!\n");
    //     break;
    //     case 3: printf("Voce ganhou 3 estrelas!\n");
    //     break;
    //     case 4: printf("Voce ganhou 4 estrelas!\n");
    //     break;
    //     case 5: printf("Voce ganhou 5 estrelas!\n");
    //     break;
    //     default: printf("Nota invalida!\n");
    // }


    printf("MENU PRINCIPAL");
    printf("------------------\n");
    printf("1 - consultar saldo\n");
    printf("2 - recarrega solda\n");
    printf("3 - ver recados\n");
    printf("4 - ver ligacoes\n");
    printf("5 - sair\n");
    printf("Entre com a opcao=> ");

    int opcao = 0;
    scanf("%i", &opcao);

    switch(opcao){
        case 1: printf("Seu saldo eh R$10.00\n"); break;
        case 2: printf("Escolha um valor de recarga\n"); break;
        case 3: printf("Voce tem 4 recados\n"); break;
        case 4: printf("Voce ligou 5 vezes\n"); break;
        case 5: printf("Ate logo\n"); break;
        default: printf("Opcao invalida\n");
    }


    return 0;
}