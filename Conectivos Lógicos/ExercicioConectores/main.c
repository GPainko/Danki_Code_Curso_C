#include <stdio.h>
/*tabela verdade 
      e              ou
  v - v = v      v - v = v      
  v - f = f      f - v = v
  f - f = f      f - f = f
*/
int main(void) {
  int valor;

  printf("digite o valor desejado: ");
  scanf("%d",&valor);
  if(valor > 0 && valor < 10){
    printf("o valor esta entre 0 e 10");
  }else{
    printf("o valor nao esta entre 0 e 10");
  }
  
  return 0;
}