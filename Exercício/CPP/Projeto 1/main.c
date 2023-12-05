#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
  setlocale(LC_ALL, "Portuguese");
	
  float n1, n2, result;

  printf("Informe a primeira nota:\n> ");
  scanf("%f", &n1);

  printf("Informe a segunda nota:\n> ");
  scanf("%f", &n2);

  system("cls");

  result = (n1 + n2)/2;

  printf("(%.1f + %.1f)/2 = %.1f\n\n", n1, n2, result);
	
}
