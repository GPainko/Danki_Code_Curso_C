#include <stdio.h>

int main(void) {
  float valor1;
  float valor2;
  float resultado;

  printf("digite o numero que deseja multiplicar: ");
  scanf("%f",&valor1);

  printf("digite o numero que deseja ser o multiplo: ");
  scanf("%f",&valor2);

  printf("a operação é: %f / %f \n",valor1,valor2);

  resultado = valor1*valor2;
  printf("o resultador é : %.2f",resultado);
  return 0;
}