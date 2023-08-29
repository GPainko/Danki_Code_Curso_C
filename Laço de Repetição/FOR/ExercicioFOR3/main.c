#include <stdio.h>

int main(void) {
  int vi;
  int vf;
  int vq;
  int i;

  printf("digite o valor inicial: ");
  scanf("%d",&vi);

  printf("digite o valor final: ");
  scanf("%d",&vf);

  printf("digite o valor da sequencia: ");
  scanf("%d",&vq);

  for(i = vi;i<=vf;i = i + vq){
    printf("sequencia: %d\n",i);
  }
  
  return 0;
}