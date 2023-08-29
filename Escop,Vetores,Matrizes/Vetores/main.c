#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int main(void) {
  
  //definindo vetores de varias formas 
  int vetorDeInt[] = {1,2,3,4};
  float vetorDeFloat[3] = {1.5,2.2,3.0};
  char vetorDeChar[TAM] = {'a','b'};
  
  //modificando o valor por atribuição
  vetorDeInt[0] = 9;

  //modificando valor com variavel
  float novoValor = 5.0;
  vetorDeFloat[2] = novoValor;

  //modificando valor com usuario
  printf("Digite uma letra nova:");
  __fpurge(stdin);
  scanf("%c",&vetorDeChar[0]);

  //imprimindo valor
  int i = 0;
  printf("\ vetor1: \n");
  for(i = 0; i < 4 ;i++){
    printf("%d\n",vetorDeInt[i]);
  }

  printf("\ vetor2: \n");
  for(i = 0; i < 3 ;i++){
    printf("%f\n",vetorDeFloat[i]);
  }

  printf("\ vetor3: \n");
  for(i = 0; i <TAM ;i++){
    printf("%c\n",vetorDeChar[i]);
  }
  
  return 0;
}