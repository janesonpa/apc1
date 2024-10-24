#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao = 0;

    while (opcao != 5){
        opcao =0;
        system("clear");
        printf("MENU PRINCIPAL\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Fazer recarga\n");
        printf("3 - Ver recados\n");
        printf("4 - Ultimas ligacoes\n");
        printf("5 - Sair\n");
        printf("Entre com uma opcao =>");
        scanf("%i", &opcao);
        while (getchar() != '\n');

        switch (opcao){
            case 1: {
                system("clear");
                printf("CONSULTA DE SALDO\n\n");
                printf("Seu saldo e de R$ 10.00.\n\n");
                break;
            }
            case 2: {
                system("clear");
                printf("RECARGA\n\n");
                printf("Escolha um valor de recarga\n\n");
                break;
            }
            case 3: {
                system("clear");
                printf("RECADOS\n\n");
                printf("Voce nao tem recados.\n\n");
                break;
            }
            case 4: {
                system("clear");
                printf("LIGACOES\n\n");
                printf("1111-2222\n3333-4444\n\n");
                break;
            }
            case 5: printf("Ate logo!\n");
                break;
            default: printf("opcao invalida. Tente novamente!\n");
            
        }   
        
        if (opcao != 5){
            printf("Pressione ENTER para continuar...");
            getchar();
        }
         }



    return 0;
}