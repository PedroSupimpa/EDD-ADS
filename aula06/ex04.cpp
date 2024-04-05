#include <stdio.h>
#include <string.h>

struct livro {
    char titulo[25];
    int registro;
    float preco;
};

int main() {
    struct livro livros[50];
    int i, posicao = 0;

    for (i = 0; i < 50; i++) {
        printf("\nDigite [s] pra sair:");
        printf("\nTitulo do livro: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        
     
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

        if (strcmp(livros[i].titulo, "s") == 0)
            break;

        printf("Numero de registro: ");
        scanf("%d", &livros[i].registro);
        
        printf("Preco: ");
        scanf("%f", &livros[i].preco);

        posicao++;
        getchar(); 
    }

    return 0;
}

