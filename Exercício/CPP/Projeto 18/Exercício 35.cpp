#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf ("Insira seu primeiro n�mero\n");
	scanf ("%d", &n1);
	
	printf ("\nInsira seu segundo n�mero\n");
	scanf ("%d", &n2);
	
	printf ("\nInsira seu terceiro n�mero\n");
	scanf ("%d", &n3);
	
	if (n1>n2 && n1 > n3){
		
		printf ("\n%d", n1);
	}
	
	else if (n2 > n1 && n2 > n3){
		
		printf ("\n%d", n2);
	}
	
	else if (n3 > n1 && n3 > n2) {
		
		printf ("\n%d", n3);
	}
	
	else {
		printf ("\nResto");
	};
}
