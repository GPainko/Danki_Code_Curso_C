#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
  int idade;
  float salario;
  char nome[255];
};

int main() {
  struct Pessoa pessoal[2];

  pessoal[0].idade = 25;
  pessoal[0].salario = 500.00;
  strcpy(pessoal[0].nome,"John");

  pessoal[1].idade = 30;
  pessoal[1].salario = 800.00;
  strcpy(pessoal[1].nome,"Billy");

  int i;
  for(int i =0; i<2 ; i++){
    printf("nome: %s ",pessoal[i].nome);
    printf("idade: %d ",pessoal[i].idade);
    printf("salario: R$%.2f \n",pessoal[i].salario);
  }
  
  return 0;
}