#include <stdio.h>

void averageVector(int vectorNum[], int size);
void readVector(int num[], int size); 

int main() {
    int num[3];
    printf("Entrada de dados:\n");

    readVector(num, 3); 

    averageVector(num, 3);

    return 0;
}

void averageVector(int vectorNum[], int size) {
    printf("\n\nSaida de dados:\n");
    int soma = 0;
    for (int i = 0; i < size; i++) {
        soma += vectorNum[i];
    }
    double average = (double)soma / size;
    printf("Average: %.2f\n", average);
}

void readVector(int num[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Valor inteiro: ");
        scanf("%d", &num[i]);
    }
}

