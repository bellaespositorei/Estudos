#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int potencia (int base, int expoente){
	int resultado;
	resultado = (int)pow(base, expoente);
	return (resultado);
}

int main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int base, expoente, resultado;
	
	printf ("Digite a base da sua potência: \n");
	scanf ("%d", &base);
	
	printf ("\n Digite o expoente que deseja: \n");
	scanf ("%d", &expoente);
	
	resultado = potencia(base, expoente);

	printf ("\n O resultado da sua potência é = %d", resultado);
	
}
