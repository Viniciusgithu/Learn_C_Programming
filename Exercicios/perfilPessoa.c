 /*
 * Ler nome, idade e altura de uma pessoa.
 * Exibir nome, idade, altura e ano de nascimento.
 */

#include <stdio.h>

#define text "Primeiro programa criado em C"

int main(){

 printf("%s\n", text);

 char nome[20] = "";
 int idade,ano = 0;
 float altura = 0.0;

 printf("Qual é o seu nome?\n");
 scanf("%s", &nome);

 printf("Qual é a sua idade?\n");
 scanf("%d", &idade);
 
 ano = 2023 - idade;

 printf("Qual é a sua altura?\n");
 scanf("%f", &altura);

 printf("Dados coletados: \n");
 printf("Seu nome: %s.\n", nome);
 printf("Idade: %d.\n", idade);
 printf("Pela sua idade, seu  nascimento é: %d.\n", ano);
 printf("E sua altura: %.2f.\n", altura);


}