
/* 

Elaborar um programa que receba:
o valor de um depósito e o valor da taxa de juros. 

Após calcular, apresentar o valor do rendimento e o valor total (valor do depósito + valor do rendimento).

*/

#include <stdio.h>
#include <locale.h>

int main (){
 
  setlocale(LC_ALL,"Portuguese");  

  float  deposito, taxa, rendimento, total;

  printf("Informe o valor do depósito: ");
  scanf("%f", &deposito);

  printf("Informe a taxa de juros: ");
  scanf("%f", &taxa);

  rendimento = deposito * (taxa/100);
  total = deposito + rendimento;

  printf("O rendimento é: %.2f", rendimento);
  printf("O total é: %.2f", total);


}