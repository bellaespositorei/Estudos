#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int variavelA, variavelB, aux;
	printf ("Digite a vari�vel A:\n> ");
	scanf ("%d", &variavelA);
	printf ("\nDigite a vari�vel B:\n> ");
	scanf ("%d", &variavelB);
	
	aux = variavelA;
	variavelA = variavelB;
	variavelB = aux;
	
	printf ("\nVari�vel A � = %d", variavelA);
	printf ("\nVari�vel B � = %d", variavelB);
}
