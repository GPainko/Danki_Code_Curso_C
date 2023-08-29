#include <stdio.h>

int valor = 0;

void adicionaUmAte10(){
  if(valor <= 10){
    printf("%d \n",valor);

    valor++;
    adicionaUmAte10();
  }
}

int main(void) {
  adicionaUmAte10();
  printf("fim");
  return 0;
}