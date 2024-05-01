#include <stdio.h>


//Questao1

struct Veiculos {
    int ano;
    char modelo[50];
    char cor[50];
};


void lerVeiculo(struct Veiculos *v) {
    printf("Digite as informacoes do carro: \n");
    printf("Ano: ");
    scanf("%d", &v->ano);
    printf("Modelo: ");
    scanf("%s", v->modelo);
    printf("Cor: ");
    scanf("%s", v->cor);
}


void mostrarVeiculo(struct Veiculos v) {
    printf("\nInformacoes do carro: \n");
    printf("Ano: %d\n", v.ano);
    printf("Modelo: %s\n", v.modelo);
    printf("Cor: %s\n", v.cor);
}

int main() {
    struct Veiculos veiculo1;

    lerVeiculo(&veiculo1);
    mostrarVeiculo(veiculo1);

    return 0;
}


//Questao2

#define TAMANHO 5

int main() {
    int vetor[TAMANHO] = {5, 10, 15, 20, 25};

    int *ptr = vetor;

    printf("Elementos do vetor: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", *(ptr + i)); 
    }


    printf("\n");

    return 0;
}