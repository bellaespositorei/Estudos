#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	
  setlocale(LC_ALL, "Portuguese");
	
  int cateto1, cateto2, result;

  printf("Informe o valor do Cateto 1 do triângulo:\n> ");
  scanf("%d", &cateto1);

  printf("\n Informe o valor do Cateto 2 do triângulo:\n> ");
  scanf("%d", &cateto2);

  system("cls");

  result = sqrt(pow(cateto1,2) + pow (cateto2,2));

  printf("Hipotenusa = %d\n", result);
	
}
