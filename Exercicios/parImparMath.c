
/*

Elabore um programa que me ler os numeros e analisa se é par ou impar, se for par ele diz a raiz quadrada, se for impar eleva ao quadrado.

*/


#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {

  setlocale(LC_ALL,"Portuguese");  

  int numero, quadrado;
  float raiz; 

  printf("\nDigite um número inteiro: ");
  scanf("%d", &numero); 

  if ( numero % 2 == 0){
    printf("O número: %d é par!\n", numero);
    raiz = sqrt(numero);
    printf("E sua raiz quadrada é: %.2f", raiz);
  } else {
    printf("O número: %d é impar!\n", numero);
    quadrado = numero * numero; 
    printf("O número ao quadrado é: %d", quadrado);
  }
  
  return 0;
}