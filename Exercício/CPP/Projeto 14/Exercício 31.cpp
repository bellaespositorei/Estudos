#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main (void){
	
	setlocale (LC_ALL,"Portuguese");
	
	int valorSalarioBruto, valorEmprestimo, resultado;
	
	printf ("Insira o valor do seu salário bruto.\n");
	scanf ("%d", &valorSalarioBruto);
	
	printf ("\nInsira o valor do seu empréstimo.\n");
	scanf ("%d", &valorEmprestimo);
	
	resultado = (valorSalarioBruto * 30)/100;
	
	if (valorEmprestimo <= resultado) {
		
		printf ("\nSeu empréstimo foi aprovado!");
	}
	
	else {
		printf ("\nSeu empréstimo foi negado.");
	};
}
