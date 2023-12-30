#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main (void){
	
	setlocale (LC_ALL,"Portuguese");
	
	int n1;
	
	printf ("Insira o número desejado: \n");
	scanf ("%d", &n1);
	
	if (n1 > 20){
		printf ("\nEsse número é maior que 20", n1);
	}
	 else if (n1 < 20){
		printf("\nEsse número é menor que 20", n1);
	}
	else {
		printf ("\nEsse número é igual a 20", n1);
	};
}
