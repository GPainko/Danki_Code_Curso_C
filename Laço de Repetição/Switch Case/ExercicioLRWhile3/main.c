#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;

  printf("digite um valor:");
  scanf("%d", &valor1);
  printf("digite um valor:");
  scanf("%d", &valor2);

  while (!(valor1 > 5 && valor1 < 10) || !(valor2 > 5 && valor2 < 10)) {
    printf("erro digite novamente");
    printf("digite um valor:");
    scanf("%d", &valor1);
    printf("digite um valor:");
    scanf("%d", &valor2);
  }

  printf("soma: %d", valor1 + valor2);
  return 0;
}