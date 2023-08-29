#include <stdio.h>

int exemploGlobal = 20;

void imprimaA(){
  int a =10;
  printf("valor de A na funcao: %d\n",a);
  exemploGlobal = 50;
}

int main(void) {
  
  //defina uma valor de a no escopo da main
  int a = 15;
  printf("valor de A na função: %d \n",a);
  printf("valor do exemplo global novo %d\n",exemploGlobal);

  imprimaA();

  printf("valor de A na função: %d\n",a);
  printf("valor do exemplo global novo: %d",exemploGlobal);
  
  return 0;
}