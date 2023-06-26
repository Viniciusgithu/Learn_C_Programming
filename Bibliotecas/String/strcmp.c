
#include <stdio.h>
#include <string.h>

int main(){

  char str1[4] = "abc";
  char str2[4] = "abd";
  int retorno;

  retorno = strcmp(str1, str2);

  /*
  
   0: conteúdo das strings é igual;
   < 0: conteúdo da str1 é menor do que str2;
   > 0: conteúdo da str1 é maior do que str2;   

  */

 printf("Retorno = %d \n ", retorno);


}