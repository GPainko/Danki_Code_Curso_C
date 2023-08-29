#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;
  int resultado;

  printf("digite o numero que deseja dividir: ");
  scanf("%d",&valor1);

  printf("digite o numero que deseja ser o divisor: ");
  scanf("%d",&valor2);

  printf("a operação é: %d / %d \n",valor1,valor2);

  resultado = valor1/valor2;
  printf("o resultador é : %d",resultado);
  return 0;
}