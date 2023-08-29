#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;
  int soma;
  int divisao;

  printf("digite o valor desejado: ");
  scanf("%d", &valor1);

  printf("digite o valor desejado: ");
  scanf("%d", &valor2);

  soma = valor1 + valor2;
  divisao = soma % 2;

  if ((soma > 0 && soma < 10) || divisao == 0) {
    printf("esta entre 0 ou 10 e é par");
  } else {
    printf("erro");
  }

  return 0;
}