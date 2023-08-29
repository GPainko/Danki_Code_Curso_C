#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;
  int valor3;

  printf("digite o valor desejado: ");
  scanf("%d",&valor1);

  printf("digite o valor desejado: ");
  scanf("%d",&valor2);

  printf("digite o valor desejado: ");
  scanf("%d",&valor3);
  
  if(valor1 > 10 && valor2 > 10 && valor3 > 10){
    printf("o valor esta entre 0 e 10");
  }else{
    printf("um valor nao esta entre 0 e 10");
  }

  return 0;
}