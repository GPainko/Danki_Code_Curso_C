#include <stdio.h>

int main(void) {
  
  //definindo string de varias formas 
  char palavra1[] = "boi";
  char palavra2[5] = "bala";
  char palavra3[] = {'a','b','c','d','\0'};
  char palavra4[5] = {'f','o','n','e','\0'};

  //imprimindo uma string(sem espaço)
  printf("%s \n",palavra1);

  //lendo uma string (sem espaço)
  printf("digite uma palavra com ate 4 letras: ");
  __fpurge(stdin);
  scanf("%s",palavra2);

  //lendo uma string(com espaço)
  char fruta[255];
  __fpurge(stdin);
  printf("digite o nome de uma fruta: ");
  fgets(fruta,sizeof(fruta),stdin);

  //imprimindo a fruta lida
  printf("fruta lida:");
  puts(fruta);
  
  return 0;
}