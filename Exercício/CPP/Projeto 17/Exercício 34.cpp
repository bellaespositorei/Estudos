#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Insira o seu primeiro número\n");
	scanf ("%d", &n1);
	
	printf("\nInsira o seu segundo número\n");
	scanf ("%d", &n2);
	
	if (n1>n2){
		
		printf ("\n%d", n1);
	}
	
	else if (n2>n1){
		
		printf ("\n%d", n2);
	}
	
	else {
		printf ("\nOs números são iguais");
	};
}
