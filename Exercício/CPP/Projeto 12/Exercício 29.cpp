#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>



int main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	float n1, n2, resultado;
	char operacao;
	
	
		printf ("\nOl�, bem vinde a sua calculadora!\n");
		printf ("Qual opera��o deseja fazer?\n");
		printf ("+ - Adi��o\n");
		printf ("- - Subtra��o\n");
		printf ("* - Multiplica��o\n");
		printf ("/ - Divis�o\n\n");
		
		scanf (" %c", &operacao);
		
		if (operacao == '+'){
			
			printf ("\nInsira aqui o primeiro n�mero da sua opera��o.\n");
				scanf ("%f", &n1);
				
				printf ("\nInsira aqui o segundo n�mero da sua opera��o.\n");
				scanf ("%f", &n2);
				resultado = n1 + n2;
				
				printf ("\nSeu resultado � %.2f", resultado);
		}
		
		else if (operacao == '-') {
			printf ("\nInsira aqui o primeiro n�mero da sua opera��o.\n");
			scanf ("%f", &n1);
				
			printf ("\nInsira aqui o segundo n�mero da sua opera��o.\n");
			scanf ("%f", &n2);
			resultado = n1 - n2;
				
			printf ("\nSeu resultado � %.2f", resultado);	
		}
		
		else if (operacao == '*') {
			printf ("\nInsira aqui o primeiro n�mero da sua opera��o.\n");
			scanf ("%f", &n1);
				
			printf ("\nInsira aqui o segundo n�mero da sua opera��o.\n");
			scanf ("%f", &n2);
			resultado = n1 * n2;
				
			printf ("\nSeu resultado � %.2f", resultado);
		}
		
		else if (operacao == '/'){
			printf ("\nInsira aqui o primeiro n�mero da sua opera��o.\n");
			scanf ("%f", &n1);
				
			printf ("\nInsira aqui o segundo n�mero da sua opera��o.\n");
			scanf ("%f", &n2);
			resultado = n1 / n2;
				
			printf ("\nSeu resultado � %.2f", resultado);
		}
		else {
			printf ("\nCaractere inv�lido!");
		};
		
}
