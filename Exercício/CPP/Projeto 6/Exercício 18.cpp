#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int raio, result;
	
	printf ("Insira o valor do Raio desejado\n> ");
	scanf ("%d", &raio);
	
	result = (4*3.14*(raio*raio*raio)/3);
	
	printf ("O valor do volume da esfera é: %d", result);
	
}
