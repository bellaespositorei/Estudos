#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int variavelA, variavelB, aux;
	printf ("Digite a variável A:\n> ");
	scanf ("%d", &variavelA);
	printf ("\nDigite a variável B:\n> ");
	scanf ("%d", &variavelB);
	
	aux = variavelA;
	variavelA = variavelB;
	variavelB = aux;
	
	printf ("\nVariável A é = %d", variavelA);
	printf ("\nVariável B é = %d", variavelB);
}
