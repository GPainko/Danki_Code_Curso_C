#include <stdio.h>

int main(void) {
  int valor;
  int divisao;

  printf("valor que deseja:");
  scanf("%d",&valor);
  divisao = valor%2;
  printf("%d",divisao);

  if(divisao == 0){
    printf("numero é par");
  }else{
     printf("numero é impar");
  }
  return 0;
}