#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //Usa o tempo como semente
  srand(time(NULL));
  //cria um numero aleatorio entre 1 a 6
  int r = (rand() %6) + 1;
  int s = (rand() %6) + 1;
  int t = (rand() %6) + 1;
  //imprime o numero gerado
  int soma = r + s + t;
  printf("dado 1 = %d \n",r);
  printf("dado 2 = %d \n",s);
  printf("dado 3 = %d \n",t);
  printf("soma = %d \n",soma);
  return 0;
}