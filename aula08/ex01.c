#include <stdio.h>

void printVector(int *V, int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("Valor do vetor[%d]: %d\n", i, V[i]);
    }
}

void bubbleSort(int *V, int N) {
    int i, continua = 1, aux;
    
    while (continua) {
        continua = 0;
        for (i = 0; i < N - 1; i++) {
            if (V[i] > V[i + 1]) {
               
                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;
                continua = 1; 
            }
        }
    }
}

int main() {
    int vet[5] = {23, 4, 67, -8, 21};
    printf("Sem ordenar:\n");
    printVector(vet, 5);
    
    bubbleSort(vet,5);
    printf("Ordenado:\n");
    printVector(vet,5);
    

    return 0;
}

