/*

Desenvolver um programa que irá calcular o valor do produto com dez por cento de desconto.

*/

#include <stdio.h>
#include <locale.h>

int main(){

 setlocale(LC_ALL, "Portuguese");

 float valor1, valor2;

 printf("Olá! Seja bem vindo(a).\n");

 printf("Vamos lá, me diga o valor do produto.\n");

 scanf("%f", &valor1);

 valor2 = valor1 - (valor1 * 0.1);

 printf("O produto sairá por: %.2f\n", valor2);



}