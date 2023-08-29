#include <stdio.h>

int main(void) {
  float a;
  float b;
  float resultado;

  printf("digite o valor que deseja ser multiplicado: ");
  scanf("%f",&a);
  
  printf("digite o valor do multiplicador: ");
  scanf("%f",&b);

  resultado = a*b;
  printf("o resultado: %.2f",resultado);
  
  return 0;
}