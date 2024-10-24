#include <stdio.h>

int main (){
    int opcao = 0;

    while ( opcao != 4){
    opcao = 0;
    system("clear");
    printf("MENU PRINCIPAL\n\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Escolha seu caractere\n");
    printf("3 - Recordes\n");
    printf("4 - sair\n");
    printf("Entre com uma opcao:");
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch (opcao) {
        case 1 : 
        printf("Nome do jogador:\n");
            break;
        case 2 :
        printf("Caracteres\n");
            break;
        case 3 :
        printf("SEUS RECORDES\n");
            break;
        case 4 :
        printf("Ate mais");
            break;
        default: ("Opcao invalida. Tente novamente!");
    }

    }



    return 0;
}