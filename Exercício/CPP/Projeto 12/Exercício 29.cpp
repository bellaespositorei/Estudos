#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>



int main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	float n1, n2, resultado;
	char operacao;
	
	
		printf ("\nOlá, bem vinde a sua calculadora!\n");
		printf ("Qual operação deseja fazer?\n");
		printf ("+ - Adição\n");
		printf ("- - Subtração\n");
		printf ("* - Multiplicação\n");
		printf ("/ - Divisão\n\n");
		
		scanf (" %c", &operacao);
		
		if (operacao == '+'){
			
			printf ("\nInsira aqui o primeiro número da sua operação.\n");
				scanf ("%f", &n1);
				
				printf ("\nInsira aqui o segundo número da sua operação.\n");
				scanf ("%f", &n2);
				resultado = n1 + n2;
				
				printf ("\nSeu resultado é %.2f", resultado);
		}
		
		else if (operacao == '-') {
			printf ("\nInsira aqui o primeiro número da sua operação.\n");
			scanf ("%f", &n1);
				
			printf ("\nInsira aqui o segundo número da sua operação.\n");
			scanf ("%f", &n2);
			resultado = n1 - n2;
				
			printf ("\nSeu resultado é %.2f", resultado);	
		}
		
		else if (operacao == '*') {
			printf ("\nInsira aqui o primeiro número da sua operação.\n");
			scanf ("%f", &n1);
				
			printf ("\nInsira aqui o segundo número da sua operação.\n");
			scanf ("%f", &n2);
			resultado = n1 * n2;
				
			printf ("\nSeu resultado é %.2f", resultado);
		}
		
		else if (operacao == '/'){
			printf ("\nInsira aqui o primeiro número da sua operação.\n");
			scanf ("%f", &n1);
				
			printf ("\nInsira aqui o segundo número da sua operação.\n");
			scanf ("%f", &n2);
			resultado = n1 / n2;
				
			printf ("\nSeu resultado é %.2f", resultado);
		}
		else {
			printf ("\nCaractere inválido!");
		};
		
}
