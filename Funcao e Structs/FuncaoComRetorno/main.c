#include <stdio.h>

int retorna10(){
  int a = 10;
  return a;
}

float retornaQuebrado(){
  float a =5.5;
  return a;
}

char retornaLetra(){
  return 'a';
}

int main(void) {
  
  printf("retunra 10 da função: %d \n",retorna10());

  float numeroQuebrado = retornaQuebrado();
  printf("numero quebrado: %.1f \n",numeroQuebrado);
  
  printf("retonar letra: %c \n",retornaLetra());
  return 0;
}