#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Projeto para aula da Tacyana
//Feito por Xico

int main(void) {
  int num1, num2;

  printf("Calculadora 0.1\n\n");
  printf("Olá Mundo, vamos calcular!\n\n");
  printf("Por favor, digite um número: \n");
  scanf("%i", &num1);
  printf("Por favor, digite outro número: \n");
  scanf("%i", &num2);
  
  int div = num1 / num2;
  int soma = num1 + num2;
  int subtracao = num1 - num2;
  int multi = num1 * num2;

  printf("\nResultado:\n");

  printf("%i / %i = %i\n", num1, num2, div);
  printf("%i + %i = %i\n", num1, num2, soma);
  printf("%i - %i = %i\n", num1, num2, subtracao);
  printf("%i * %i = %i\n", num1, num2, multi);

  return 0;
}
