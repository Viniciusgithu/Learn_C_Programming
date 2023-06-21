/*

Imagine que você está desenvolvendo um programa de inteligência artificial capaz de classificar animais de acordo com algumas características que o usuário informa. Esse programa deve pedir para o usuário informar as seguintes características do animal:

Peso em kg
Altura em cm
Se tem pelos?
Se é mamífero?
Com base nessas características, o programa deve classificar o animal em uma das seguintes categorias:

Elefante (peso maior que 2000kg e altura maior que 300cm);
Cavalo (altura igual a 150cm e é mamífero);
Cachorro (tem pelos e é mamífero);
Serpente (não tem pelos e não é mamífero);
Tartaruga (não tem pelos e é mamífero).
Seu programa deve exibir na tela a classificação do animal ou informar que não foi possível classificar o animal com base nas informações fornecidas.

*/


#include <stdio.h>

int main() {
  float peso, altura;
  char temPelos, ehMamifero;
  
  printf("Digite o peso em kg: ");
  scanf("%f", &peso);
  printf("Digite a altura em cm: ");
  scanf("%f", &altura);
  //Como scanf lê os caracteres no buffer de entrada (teclado), quando digitamos um caractere e
  //teclamos enter, o caractere '\n' vai para o buffer e é lido pelo próximo scanf (que espera um char).
  //Para resolover essa situação, basta inserir um espaço entre a aspa e o símbolo %c:
  printf("O animal tem tem pelos? s ou n ");
  scanf(" %c", &temPelos);
  printf("O animal é mamífero? s ou n ");  
  scanf(" %c", &ehMamifero);
  
  //TODO: Implementar o restante das condições para que todos os animais sejam categorizados.
  if (peso >= 2000 && altura >= 300) {
    printf("O animal é um elefante!");
  } else if (ehMamifero == 's' && temPelos == 's' && altura == 150) {
    printf("O animal é um cavalo");
  } else if (temPelos == 's' && ehMamifero == 's' && altura <= 100) {
    printf("O animal é um cachorro");
  } else if (temPelos == 'n' && ehMamifero == 'n') {
    printf("O animal é uma serpente");
  } else if (temPelos == 'n' && ehMamifero == 's') {
    printf("O animal é uma tartaruga"); 
  }
  else {
    printf("Não foi possível classificar o animal!");
  }

  return 0;
}