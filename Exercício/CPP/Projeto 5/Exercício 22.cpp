#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>


int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int pedido, unidades;
	float resultado;
	
	int finalizado = 0;
	
	while (finalizado == 0){
	
		printf ("\nOlá, bem vinde!\n\n");
		printf ("Qual o seu pedido?\n\n");
		printf ("1. Hamburguer: R$ 4,20\n");
		printf ("2. XBurguer: R$ 5,50\n");
		printf ("3. Batata Frita: R$ 3,80\n");
		printf ("4. Milkshake: R$ 5,80\n");
		printf ("5. Quero finalizar meu pedido.\n\n");
		
		scanf ("%d", &pedido);
		
		switch (pedido) {
			
			case 1: 
			printf ("\nE quantas unidades você deseja?\n\n");
			scanf ("%d", &unidades);
			resultado = resultado + (4.20 * unidades);
			break;
			
			case 2: 
			printf ("\nE quantas unidades você deseja?\n\n");
			scanf ("%d", &unidades);
			resultado = resultado + (5.50 * unidades);
			break;
			
			case 3: 
			printf ("\nE quantas unidades você deseja?\n\n");
			scanf ("%d", &unidades);
			resultado = resultado + (3.80 * unidades);
			break;
			
			case 4: 
			printf ("\nE quantas unidades você deseja?\n\n");
			scanf ("%d", &unidades);
			resultado = resultado + (5.8 * unidades);
			break;
			
			case 5: printf ("\nO total do seu pedido é: %.2f", resultado);
					finalizado++;
			break;
			
			default: printf ("Essa opção não existe");
			break;
			
		}
	}
}
