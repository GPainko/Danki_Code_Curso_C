#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;
  int soma;

  printf("digite um valor:");
  scanf("%d", &valor1);

  printf("digite um valor:");
  scanf("%d", &valor2);

  soma = valor1 + valor2;

  printf("%d \n", soma);
  if (soma >= 10) {
    printf("maior ou igual que 10");
  } else if (soma < 10) {
    printf("menor que 10");
  }
  return 0;
}