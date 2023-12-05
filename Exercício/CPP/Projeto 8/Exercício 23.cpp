#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int soma (int numero1, int numero2) {
	return numero1 + numero2;
}


int main (void) {
	setlocale (LC_ALL, "Portuguese");
	system("cls");
	
	int numero1, numero2, resultado;
	
	printf ("Insira o 1º número\n> ");
	scanf ("%d", &numero1);
	printf ("\nInsira o 2º número\n> ");
	scanf ("%d", &numero2);
	
	resultado = soma(numero1, numero2);
	
	printf ("\nA soma é igual a %d", resultado);
}
