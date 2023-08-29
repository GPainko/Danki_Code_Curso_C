#include <stdio.h>

int main(void) {
  int opcao;
  int valor1;
  int valor2;
  int soma;
  int subtracao;
  int multiplicao;
  int divisao;

  printf("digite um valor:");
  scanf("%d",&valor1);

  printf("digite um valor:");
  scanf("%d",&valor2);
  
  printf("  MENU CALCULADORA \n");
  printf("1 - somar\n");
  printf("2 - subtrair\n");
  printf("3 - multiplicar\n");
  printf("4 - dividir \n");
  printf("Escolha a opção desejada:");
  scanf("%d",&opcao);

  switch(opcao){
    case 1:
      soma = valor1+valor2;
      printf("soma é  %d",soma);
      break;
    case 2:
      subtracao = valor1-valor2;
      printf("subtracao é  %d",subtracao);
      break;
    case 3:
      multiplicao = valor1*valor2;
      printf("multiplicao é  %d",multiplicao);
      break;
    case 4:
      divisao = valor1/valor2;
      printf("divisao é  %d",divisao);
      break;
    default:
      printf("erro: opcao invalida");
      break;
  }
  return 0;
}