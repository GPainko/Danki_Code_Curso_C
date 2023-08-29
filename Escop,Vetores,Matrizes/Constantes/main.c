#include <stdio.h>
#include <stdlib.h>
// Definindo uma constante no cabeçalho
#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

int main(void) {
  //definindo uma constante dentro da função main
  const int LADO = 10;

  printf("%d \n",CONSTANTE);
  printf("%.1f \n",QUEBRADO);
  printf("%c \n",LETRA);
  printf("%d \n",LADO);
  
  return 0;
}