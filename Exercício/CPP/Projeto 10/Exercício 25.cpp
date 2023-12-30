#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int somarPotencia (int n1, int n2, int n3){
	
	int potencia1 = pow (n1, 2);
	int potencia2 = pow (n2, 2);
	int potencia3 = pow (n3, 2);

	return potencia1 + potencia2 + potencia3;
}


int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, resultado;
	
	printf ("Qual o primeiro número escolhido?\n");
	scanf ("%d", &n1);
	
	printf ("\nQual o segundo número escolhido?\n");
	scanf ("%d", &n2);
	
	printf ("\nQual o terceiro número escolhido?\n");
	scanf ("%d", &n3);
	
	resultado = somarPotencia (n1, n2, n3);
	
	printf ("\n Seu resultado é = %d", resultado);
}
