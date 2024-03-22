#include <stdio.h>

#define LINHAS 2
#define COLUNAS 5


void preencherMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("Matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];


    preencherMatriz(matriz);

  
    exibirMatriz(matriz);

    return 0;
}

