#include <stdio.h>


int main () {
	int i,
	numero [3];
	printf("Entrada de dados:\n");
	
	for(i = 0; i < 3; i++){
		printf("Valor inteiro:");
		scanf("%d", & numero[i]);
	};
	
	printf("\nSaida de dados:\n");
	
	for(i = 0; i < 3; i++)
   printf("Valor: %d Posicao: %d\n", numero[i], i);
   
};
