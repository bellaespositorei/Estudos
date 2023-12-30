#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (void){
	
	setlocale (LC_ALL,"Portuguese");
	
	int salario, resultado;
	
	printf ("Insira o valor do seu salário.\n");
	scanf ("%d", &salario);
	
	if (salario <= 600){
		
		printf ("\nVocê está isento do desconto do INSS");
	}
	
	else if (salario > 600 && salario <= 1200){
		
		resultado = salario * 0.2;
		printf ("\n Seu desconto ficou no valor de %d", resultado);
	}
	
	else if (salario > 1200 && salario <= 2000){
		
		resultado = salario * 0.25;
		printf ("\n Seu desconto ficou no valor de %d", resultado);
	}
	
	else {
		resultado = salario * 0.3;
		printf ("\n Seu desconto ficou no valor de %d", resultado);
	}
}
