#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, resultado;
	
	printf ("Qual o seu primeiro n�mero?\n");
	scanf ("%d", &n1);
	
	printf ("\nQual o seu segundo n�mero?\n");
	scanf ("%d", &n2);
	
	resultado = n1 + n2;
	
	if (resultado > 20) {
		resultado += 8;
	}
	
	else {
		resultado = resultado - 5;
	};
	
	
	printf ("\nSeu resultado �: %d", resultado);
}
