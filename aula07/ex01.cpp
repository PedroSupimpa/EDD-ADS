#include <stdio.h>

int main(){
	int dia = 23;
	int *p;
	p = &dia;
	

	printf("\nConteudo de dia (variavel): %d", dia);
	printf("\nConteudo de dia (ponteiro): %d", *p);
	*p = 03;
		printf("\nConteudo de dia (variavel): %d", dia);
	printf("\nConteudo de dia (ponteiro): %d", *p);
} 
