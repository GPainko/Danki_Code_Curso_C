#include <stdio.h>

void impr(int a, int b){
  printf("\nSoma:%d",a + b);
}

int retornaSoma(int a, int b){
  int soma = a+b;
  return soma; 
}

float retornaComMais10(float a){
  return a + 10.0;
}

int main(void) {
  
  int valor1,valor2;
  printf("insira dois valores inteiros:");
  scanf("%d %d",&valor1,&valor2);;
  impr(valor1, valor2);

  printf("\n\nResultado soma 20+30: %d \n",retornaSoma(20, 30));

  float valorFinal = retornaComMais10(15.5);
  printf("\nValor com mais10 :%.2f",valorFinal);
  
  
  return 0;
}