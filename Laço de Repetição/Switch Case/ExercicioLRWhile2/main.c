#include <stdio.h>

int main(void) {
  int valor;
  int i =10;
  printf("digite o limite(maior que 10):");
  scanf("%d",&valor);

  while(i<=valor){
    /*printf("%d \n",i);
    i+=2;*/
    if(i %2 ==0){
      printf("%d \n",i);
    }
    i = i +1;
  }
  return 0;
}