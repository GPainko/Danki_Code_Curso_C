#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;

  printf("digite o valor: ");
  scanf("%d",&valor1);
  
  printf("digite o valor: ");
  scanf("%d",&valor2);

  if(valor1 > valor2){
    printf("%d > %d",valor1,valor2);
  }else if(valor1 < valor2){
    printf("%d < %d",valor1,valor2);
  }else if(valor1 == valor2){
    printf("%d = %d",valor1,valor2);
  }
  return 0;
}