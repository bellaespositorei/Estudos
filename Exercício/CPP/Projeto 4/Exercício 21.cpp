#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	
  setlocale(LC_ALL, "Portuguese");
	
  int n1, n2, soma, subtracao, multiplicacao, divisao;

  printf("Informe o 1� n�mero:\n> ");
  scanf("%d", &n1);

  printf("\n Informe o 2� n�mero:\n> ");
  scanf("%d", &n2);

  system("cls");
  
  soma = n1 + n2;
  subtracao = n1 - n2;
  multiplicacao = n1 * n2;
  divisao = n1 / n2;

  printf("Soma = %d\n", soma);
  printf("Subtra��o = %d\n", subtracao);
  printf("Multiplica��o = %d\n", multiplicacao);
  printf("Divis�o = %d\n", divisao);
	
}
