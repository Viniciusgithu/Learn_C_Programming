#include <stdio.h>
#include <locale.h>

int main(){

 setlocale(LC_ALL, "");
 printf("Oi, me chamo Vinicius.\n");

 printf("Valor inteiro: %d. \n", 10);

 printf("Valor real: %f. \n", 3.14159);
 printf("Valor real com apenas duas casas: %.2f. \n", 3.14159);
 printf("Dado de texto, um caracter isolado. Atenção para o uso das aspas simples: %c. \n", 'a');
 printf("Dado de texto, toda uma palavra. Atenção para o uso das aspas compostas: %s.\n", "testando");

}