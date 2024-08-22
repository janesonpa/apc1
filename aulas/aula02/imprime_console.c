#include <stdio.h> //biblioteca de entrada e saida na console

int main() {
  // imprime um texto na tela
  // o texto tem que esta entre aspas duolas
  // o comando \n e para quebrar a linha
  printf(" colocar o texto entre aspas duplas\n");

  // imprime um numero inteiro
  printf("%i\n",10);
  printf("%i %i\n", 50, 100);
  printf("%5i\n", 1);
  printf("%05i\n", 21);
  printf("%i%%\n", 10);

  //imprimir um numero decimal
  printf("%f\n", 8.5);
  printf("%.3f\n", 3.14159);
  printf("%8.2f\n", 110.5);
  printf("%8.2f\n", 2556.86);

  // imprime um caractere
  printf("%c\n", 'A');
  printf("%c\n", 68);

  //imprime uma string
  printf("%s\n","boa noite");
  printf("%30s!\n", "Quero cafe");
  printf("%-30s!\n", "Quero cafe");
  // a exclamaçao e apenas para identificar o espaçamento
  return 0;
}