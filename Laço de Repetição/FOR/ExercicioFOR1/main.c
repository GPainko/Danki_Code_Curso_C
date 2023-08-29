#include <stdio.h>

int main(void) {
  int i;
  int soma = 0;

  for(i =0; i<=10 ; i++){
    printf("valor atual de i: %d\n",i);
    printf("valor da soma :%d\n",soma);
    soma = soma + i;
    printf("valor da soma atual:%d\n",soma);
  }
  
  return 0;
}