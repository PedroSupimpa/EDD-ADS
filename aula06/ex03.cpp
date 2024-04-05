#include <stdio.h>
#include <stdlib.h>

struct livro {
    char titulo[25];
    int registro;
    float preco;
};

struct livro incluir(); // Function declaration modified to return struct livro
void mostrar(struct livro); // Function declaration modified to accept struct livro as parameter

int main() {
    struct livro livro1;
    
    livro1 = incluir(); // Assigning the returned struct livro to livro1
    
    system("cls");
    
    mostrar(livro1); // Passing livro1 as argument to mostrar
    
    return 0;
}

struct livro incluir() { // Function definition modified to return struct livro
    struct livro novo_livro; // Local variable to hold the livro data
    
    printf("Titulo do livro: ");
    gets(novo_livro.titulo);
    printf("Numero de registro: ");
    scanf("%d", &novo_livro.registro);
    printf("Preco: ");
    scanf("%f", &novo_livro.preco);
    
    return novo_livro; // Returning the struct livro
}

void mostrar(struct livro livro1) { // Function definition modified to accept struct livro as parameter
    printf("\nTitulo: %s", livro1.titulo);
    printf("\nNumero de registros: %d", livro1.registro);
    printf("\nPreco: R$ %.2f", livro1.preco);
}

