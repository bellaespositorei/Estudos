#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main (void){
	
	setlocale (LC_ALL,"Portuguese");
	
	int n1;
	
	printf ("Insira o n�mero desejado: \n");
	scanf ("%d", &n1);
	
	if (n1 > 20){
		printf ("\nEsse n�mero � maior que 20", n1);
	}
	 else if (n1 < 20){
		printf("\nEsse n�mero � menor que 20", n1);
	}
	else {
		printf ("\nEsse n�mero � igual a 20", n1);
	};
}
