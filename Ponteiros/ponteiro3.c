

#include <stdio.h>


int main(){

  int  *x, valor, y;
  valor = 27;
  x = &valor; // Atribuindo o endereço de valor a X
  y = *x; //Atribuindo o conteúdo da variável apontada por X a Y 

  printf("Estudando ponteiros: \n");
  printf("Endereco da variavel comum valor: %p\n", &valor);
  printf("Lendo o conteudo do ponteiro X: %p\n", x);
  printf("Endereco da variavel ponteiro X: %p\n", &x);
  printf("Conteudo da variavel apontada por X: %xd\n", *x);
  printf("Conteudo da variavel comum Y: %d", y);


}