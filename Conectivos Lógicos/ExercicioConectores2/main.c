#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;

  printf("digite o valor desejado: ");
  scanf("%d",&valor1);

  printf("digite o valor desejado: ");
  scanf("%d",&valor2);
  
  if(valor1 > 10 || valor2 > 10 ){
    printf("o valor esta entre 0 e 10");
  }else{
    printf("o valor nao esta entre 0 e 10");
  }
  
  return 0;
}