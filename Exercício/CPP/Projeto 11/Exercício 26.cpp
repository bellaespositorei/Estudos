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
	
	printf ("Qual o valor da cota��o do d�lar?\n");
	scanf ("%f", &valorDaCotacao);
	
	printf ("\nQuantos d�lares voc� tem?\n");
	scanf ("%f", &quantidadeDeDolar);
	
	resultado = conversaoParaReal (valorDaCotacao, quantidadeDeDolar);
	
	printf ("\nVoc� possui %.2f reais", resultado);
}
