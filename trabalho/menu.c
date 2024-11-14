#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao = 0;
    char jogador1[20];
    char jogador2[20];

    while ( opcao != 4){
    opcao = 0;
    system("clear");
    printf("MENU PRINCIPAL\n\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Nome dos jogadores\n");
    printf("3 - Regras do jogo\n");
    printf("4 - sair\n");
    printf("Entre com uma opcao:");
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch (opcao) {
        case 1 :{ 
            system("clear");
        
            break;
        case 2 :
            system("clear");
            printf("===============================\n\n");
            printf("* * * NOME DOS JOGADORES * * *\n\n");
            printf("===============================\n\n");
            printf("Digite o nome do jogador 1:\n->");
            scanf("%s", jogador1);
            printf("\n\nDigite o nome do jogador 2:\n->");
            scanf("%s", jogador2);

            //teste
            printf("jogador 1 =%s e jogador 2 =%s", jogador1, jogador2);
            getchar();
            break;
        }
        case 3 :{
        system("clear");
        printf("REGRAS DO JOGO\n");
        printf("1.Comeco do jogo: O jogador que usa o X comeca.\n\n");
        printf("2.Turnos alternados: Os jogadores se alternam colocando seus simbolos em uma das 9 celulas do tabuleiro. O jogador nao pode escolher uma celula ja ocupada.\n\n");
        printf("3.Ganha quem formar uma linha: O jogo termina quando um jogador consegue formar uma linha (horizontal, vertical ou diagonal) de 3 simbolos iguais.\n\n");
        printf("4.Empate: Se todas as 9 celulas forem preenchidas e ninguem formar uma linha, o jogo termina empatado.\n\n");
            break;
        }
        case 4 :
        printf("Ate mais");
            break;
        default: ("Opcao invalida. Tente novamente!");
    }
    if (opcao != 4){
            printf("Pressione ENTER para continuar...");
            getchar();
    }
    }



    return 0;
}