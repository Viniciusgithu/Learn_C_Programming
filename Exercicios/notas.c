
/* 

Elaborar um programa que receba quatro notas e calcule a média aritmética entre elas

*/

#include <stdio.h>
#include <locale.h>

int main (){
 
  setlocale(LC_ALL,"Portuguese");  

  float  n1, n2, n3, n4, media;

  printf("Após findar as quatro provas, vamos calcular a sua média.\n ");

  printf("Digite a sua primeira nota:\n");
  scanf("%f", &n1);

  printf("Digite a sua segunda nota:\n");
  scanf("%f", &n2);

  printf("Digite a sua terceira nota:\n");
  scanf("%f", &n3);

  printf("Digite a sua quarta e última nota:\n");
  scanf("%f", &n4);

  media = (n1 + n2 + n3 + n4) / 4;

  printf("A sua média foi de:\n");
  printf("%.2f", media);

}