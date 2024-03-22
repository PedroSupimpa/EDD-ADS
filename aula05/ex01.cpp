#include <stdio.h>

void showVector(int vectorNum[], int size);
void readVector(int num[], int size); 

int main() {
    int num[3];
    printf("Entrada de dados:\n");

    readVector(num, 3); 

    showVector(num, 3);
    puts("");

    num[0] = 33;
    showVector(num, 3);

    return 0;
}

void showVector(int vectorNum[], int size) {
    printf("\n\nSaida de dados:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", vectorNum[i]);
    }
}

void readVector(int num[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Valor inteiro: ");
        scanf("%d", &num[i]);
    }
}

