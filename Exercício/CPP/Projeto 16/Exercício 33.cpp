#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void){
	
	setlocale (LC_ALL,"Portuguese");
	
	char nome [50];
	char sexo;
	int idade;
	
	printf("Qual o seu nome?\n");
	scanf("%s", nome);
	
	printf("\nQual seu sexo: F ou M?\n");
	scanf(" %c", &sexo);
	
	printf("\nQual a sua idade?\n");
	scanf("%d", &idade);
	
	if ((sexo == 'F'|| sexo == 'f') && idade < 18) {
		
		printf ("\nMulher, menor de idade", sexo, idade);
	}
	else if ((sexo == 'F'|| sexo == 'f') && idade >= 18){
		printf ("\nMulher, maior de idade", sexo, idade);
	}
	else {
		printf ("\nNão foi pedido no exercício", sexo, idade);
	};
}
