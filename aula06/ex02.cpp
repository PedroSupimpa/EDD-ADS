#include <stdio.h>
#include <stdlib.h>

struct livro {
char titulo [25];
int registro;
float preco;
};

struct livro livro1;
void incluir();
void mostrar();

int main() {
	
	incluir();
	
	system("cls");
	
	mostrar();
	
	return 0;
}

void incluir (){
	printf("Titulo do livro: ");
	gets(livro1.titulo);
	printf ("Numero de registro: ");
	scanf("%d", & livro1.registro);
	printf("Preco: ");
	scanf("%f", & livro1.preco);
}

void mostrar (){
	printf("\nTitulo: %s",livro1.titulo);
	printf("\nNumero de registros: %d",livro1.registro);
	printf("\nPreco: R$ %.2f",livro1.preco);
}

