/*

Escreva um programa em C que solicite ao usuário que digite uma mensagem para o ChatGPT. Em seguida, o programa deve imprimir a mensagem de volta para o usuário, mas com cada palavra repetida duas vezes, simulando um efeito de eco.

Entrada
A entrada deve receber uma mensagem (string), conforme exemplo abaixo:

mensagem: referente ao texto que será enviado.
Saída
O código deverá retornar a mensagem duplicando cada palavra que foi enviada na entrada. Veja o exemplo de entrada e saída abaixo:

Exemplo de entrada: Olá ChatGPT, como vai?
Saída esperada: Olá Olá ChatGPT ChatGPT, como como vai? vai?
Seguem algumas dicas interessantes para resolver este desafio:

Use o padrão de formatação %[^\n] ao ler a entrada do usuário com a função scanf().
Use a função strtok() para dividir a string em palavras com base em um separador especificado.
A função strtok() está disponível na biblioteca string.h.
A função retorna um ponteiro para a próxima palavra encontrada na string a cada chamada subsequente.
Certifique-se de que o laço continue enquanto houver palavras a serem processadas.
Verifique se o ponteiro retornado pela função strtok() é diferente de NULL em cada iteração.
Use um laço de repetição (por exemplo, while ou for) para percorrer a mensagem e identificar as palavras.

*/


#include <stdio.h>
#include <string.h>

int main() {
  char mensagem[100];
  
  //O padrão "%[^\n]" lê o texto digitado até a tecla "enter", armazenando o texto na variável.
  
  scanf("%[^\n]", mensagem);
  
  char* palavra = strtok(mensagem, " ");

  while (palavra) {
    if (palavra) printf("%s %s ",palavra,palavra);
    palavra = strtok(NULL, " ");
  }
  
  return 0;
}