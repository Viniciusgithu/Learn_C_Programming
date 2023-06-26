/*

Manipulação de memória
Endereço de memória => Hardware

*/


#include <stdio.h>


int main(){

  int valor;

  printf("Descobrindo o valor na memoria, digite um numero: ");
  scanf("%d", &valor);

  printf("O numero informado foi: %d\n", valor);

  printf("Endereco da variavel desse valor, em hexadecimal: %x\n", &valor);

}