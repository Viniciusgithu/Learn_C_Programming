/*

Você foi contratado pela empresa DIO Robots para programar um robô capaz de classificar números em uma das seguintes categorias: negativo, positivo ou zero. Para isso, você deve criar uma função de classificação que receba um número como parâmetro e retorne a mensagem "negativo!" ou " positivo!", de acordo com sua categoria.

O programa deve ser executado continuamente, permitindo que o usuário insira vários números. Quando ele quiser encerrar a execução, deverá digitar um número igual a zero. A cada novo número inserido, o robô deve classificá-lo e exibir a mensagem correspondente. Ao final da execução, o programa deverá exibir a quantidade de números positivos, negativos e zeros que foram inseridos.

Entrada:
A entrada deve receber valores inteiros.

numero: valor inteiro que pode ser positivo, negativo ou zero. Lembrando que a entrada zero deve encerrar o programa.
Saída:
O código deverá retornar uma mensagem (string) informando se o número é positivo ou não. Ao receber o valor 0, ele deverá encerrar o e informar quantos números foram positivos e negativos.


*/


#include <stdio.h>

void classificarNumero(int numero, int *positivos, int *negativos) {
  if (numero < 0) {
    printf("negativo!\n");
    (*negativos)++;
  } else {
    printf("positivo!\n");
    (*positivos)++;
  }
}

int main() {
  int numero, positivos = 0, negativos = 0;
  
  while (1) {
    scanf("%d", &numero);
    if (numero == 0) {
      break; // Encerra o laço se o usuário digitar 0.
    }
    //TODO: Chamar a função "classificarNumero", passando os endereços de "positivos" e "negativos".
    classificarNumero(numero, &positivos, &negativos);
  }
  //TODO: Imprimir a saída no padrão definido neste desafio.
  printf("%d números positivos, %d números negativos",positivos,negativos);
  
  return 0;
}