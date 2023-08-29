#include <stdio.h>

int main(void) {
  char letraA;
  char letraB;

  printf("Digite uma letra:");
  scanf("%c", &letraA);
  __fpurge(stdin);
  printf("Digite uma letra:");
  scanf("%c", &letraB);

  printf("TESTE: %c%c", letraA, letraB);
  return 0;
}