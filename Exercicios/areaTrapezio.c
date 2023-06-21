
/* 

Elaborar um programa que calcule a área de um trapézio

*/

#include <stdio.h>
#include <locale.h>

int main (){
 
  setlocale(LC_ALL,"Portuguese");  

  float  base1, base2, altura, area;

  printf("Informe o valor da base maior: ");
  scanf("%f", &base1);

  printf("Informe o valor da base menor: ");
  scanf("%f", &base2);

  printf("Informe o valor da altura: ");
  scanf("%f", &altura);

    area = ((base1 + base2) * altura) / 2;

  printf("\n A área do trapézio é: %.2f", area);


}