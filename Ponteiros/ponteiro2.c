

#include <stdio.h>


int main(){

  int valor = 27;
  int *ponteiro;
  ponteiro = &valor;

  printf("Estudando ponteiros: \n");
  printf("Conteudo da variavel valor: %d\n", valor);
  printf("Endereco da variavel valor: %x\n", &valor);
  printf("Conteudo da variavel ponteiro: %x", ponteiro);


}