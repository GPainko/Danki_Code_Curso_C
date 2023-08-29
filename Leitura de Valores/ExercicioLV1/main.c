#include <stdio.h>

int main(void) {
  int valor1;
  int valor2;
  int resultado;

  printf("digite o valor que deseja dividir: ");
  scanf("%d",&valor1);
  
  printf("digite o valor que deseja que seja o divisor: ");
  scanf("%d",&valor2);

  resultado = valor1/valor2;
  printf("o resultado é: %d",resultado);
  return 0;
}