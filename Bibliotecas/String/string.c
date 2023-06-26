/*

Entrada e saída dados:
scanf()
Limitacões: sintaxe rebuscada
Especificador de formato: %s
Sintaxe geral: 
scanf("%s", <str>);
Sintaxe aprimorada:
scanf("#<tam-1>[^\n]s", <str>);

gets()
Limitações: estouro de limite do vetor
Sintaxe:
gets(<string>); 

fgets()
Último caractere sempre fica reservado ao '\0'
Estrada padrão: stdin 
Sintaxe:
fgets(<string>, <tam>, stdin);

puts()
Imprime uma string diretamente na tela
Não admite variáveis de outros tipos
Sintaxe:
puts(<string>);

fflush(stdin): chamar sempre depois de uma entrada


*/

#include <stdio.h>

int main(){

  char s[10];

  printf("Digite algo (leitura pelo gets): \n");
  gets(s);
  fflush(stdin);

  puts("Resultado: ");
  puts(s);
  puts("");

  printf("Digite algo (leitura pelo fgets): \n");
  fgets(s, 10, stdin);
  fflush(stdin);

  puts("Resultado: ");
  puts(s);


}
