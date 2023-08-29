#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;
  int divisao1;
  int divisao2;

  printf("digite o valor desejado: ");
  scanf("%d",&valor1);

  printf("digite o valor desejado: ");
  scanf("%d",&valor2);

  divisao1 = valor1%2;
  divisao2 = valor2%2;
  
  if(divisao1 == 0 || divisao2 == 0 ){
    printf("os valor são pares ou pelo menos um é");
  }else{
    printf("não são pares");
  }
  
  return 0;
}