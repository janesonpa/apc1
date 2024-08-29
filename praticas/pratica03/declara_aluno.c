#include <stdio.h>

int main(){
  long int matricula = 2422130008;
  printf("Matricula:%li\n", matricula);

  int idade = 28;
  printf("Idade:%i Anos\n",idade);

  float altura = 1.90f;
  printf("Altura:%.2f M\n", altura);

  float peso = 62.5f;
  printf("Peso:%.1f Kg\n", peso);

  const char sexo = 'M';
  printf("Sexo:%c\n", sexo);

  
  return 0;
}