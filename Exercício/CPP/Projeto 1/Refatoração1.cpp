#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float soma (float nota1, float nota2) {
	float resultado;
	resultado = (nota1 + nota2);
	return (resultado);
}

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, result;
	printf ("Digite a primeira nota:\n> ");
	scanf ("%f", &nota1);
	printf ("\nDigite a segunda nota:\n> ");
	scanf ("%f", &nota2);
	
	result = soma(nota1, nota2)/2;
	
	printf ("\nResultado = %.1f", result);
}
