#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float conversaoParaReal (float valorDaCotacao, float quantidadesDeDolar){
	return valorDaCotacao * quantidadesDeDolar;
}

int main (void) {
	
	setlocale (LC_ALL,"Portuguese");
	
	float valorDaCotacao, quantidadeDeDolar, resultado;
	
	printf ("Qual o valor da cotação do dólar?\n");
	scanf ("%f", &valorDaCotacao);
	
	printf ("\nQuantos dólares você tem?\n");
	scanf ("%f", &quantidadeDeDolar);
	
	resultado = conversaoParaReal (valorDaCotacao, quantidadeDeDolar);
	
	printf ("\nVocê possui %.2f reais", resultado);
}
