/*

Imagine que você está desenvolvendo o código para um robô de limpeza, ele deverá receber as dimensões de uma sala retangular e precisará calcular o tempo necessário que ele levará para limpar toda a área da sala.
Seu programa deve receber as dimensões da sala retangular (largura e comprimento) em metros e calcular a área total da sala em metros quadrados. Considere que o robô pode limpar uma área de 5 metros quadrados por minuto e que é necessário limpar toda a área da sala em no máximo 2 horas.

Seu programa deve calcular o tempo necessário em minutos para o robô limpar a sala e exibir o resultado.


*/


#include <stdio.h>
#include <math.h>

int main() {
  int largura, comprimento, area; 
  float tempo;

  printf("Digite a largura: ");
  scanf("%d", &largura);
  printf("Digite o comprimento: ");
  scanf("%d", &comprimento);

  //TODO: Calcular a área do local e o tempo que o robo levará para limpá-lo.
  
  area = largura*comprimento;
  tempo = (float) area/5;
  
  //TODO: Imprimir a saída de acordo com o enunciado deste desafio.
  
  printf("O robô de limpeza levará %.0f minutos para limpar a sala.", ceil(tempo));
  
}