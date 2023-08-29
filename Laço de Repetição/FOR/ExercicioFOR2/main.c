#include <stdio.h>

int main(void) {
  int valor;
  int i;
  int multi;

  printf("digite o valor desejado:");
  scanf("%d",&valor);

  printf("tabuada do %d\n",valor);
  for(i = 0;i<=10 ; i++){
    multi = valor * i;
    printf("%d X %d = %d\n",valor,i,multi);
  }
  return 0;
}