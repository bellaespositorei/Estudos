#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>


int main (void) {
	setlocale (LC_ALL, "Portuguese");
	system ("cls");
	
	int tempo, velocidade, distancia, litrosUsados;
	
	printf ("Insira o tempo gasto na viagem em minutos\n> ");
	scanf ("%d", &tempo);
	
	printf ("Insira agora a velocidade média da viagem\n> ");
	scanf ("%d", &velocidade);
	
	distancia = tempo * velocidade;
	
	litrosUsados = distancia/12;
	
	printf ("A velocidade média dessa viagem foi de %d e o tempo de %d, portanto a distância foi de %d e a quantidade de litros usados na viagem = %d", velocidade, tempo, distancia, litrosUsados);
}
