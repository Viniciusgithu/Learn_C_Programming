
/* 

Elaborar um programa que receba receba dois números, calcule e apresente o resultado do primeiro número elevado ao segundo.

*/

#include <stdio.h>
#include <locale.h>

int main (){
 
  setlocale(LC_ALL,"Portuguese");  

  float  n1, n2, potencia;

  printf("Informe o valor do primeiro número: ");
  scanf("%f", &n1);

  printf("Informe o valor do segundo número: ");
  scanf("%f", &n2);

  potencia = pow(n1, n2);

  printf("\n %.2f elevado a %.2f é: %.2f", n1, n2, potencia);

}