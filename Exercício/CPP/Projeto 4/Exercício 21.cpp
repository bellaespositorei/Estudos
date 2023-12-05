#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	
  setlocale(LC_ALL, "Portuguese");
	
  int n1, n2, soma, subtracao, multiplicacao, divisao;

  printf("Informe o 1º número:\n> ");
  scanf("%d", &n1);

  printf("\n Informe o 2º número:\n> ");
  scanf("%d", &n2);

  system("cls");
  
  soma = n1 + n2;
  subtracao = n1 - n2;
  multiplicacao = n1 * n2;
  divisao = n1 / n2;

  printf("Soma = %d\n", soma);
  printf("Subtração = %d\n", subtracao);
  printf("Multiplicação = %d\n", multiplicacao);
  printf("Divisão = %d\n", divisao);
	
}
