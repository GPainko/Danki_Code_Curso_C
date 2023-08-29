#include <stdio.h>

//função void (não retorna nada no fim)
void desenhaSeparador(){
  printf("\n---------------- \n");
}
int main(void) {
  //chama a função e executa o que estiver dentro dela
  desenhaSeparador();
  printf("Hello World");
  desenhaSeparador();
  printf("Good bye World");
  desenhaSeparador();
  return 0;
}