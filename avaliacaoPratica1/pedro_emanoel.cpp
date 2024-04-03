//- Exercícios:

// 1)	Elabore a função valor absoluto que recebe um número qualquer e retorna o valor absoluto (módulo) correspondente. O programa (função main) lê o número,
//  chama a função valor absoluto passando o número lido e depois gera a tela de saída com o valor retornado pela função valor absoluto.
//   Lembrando que valor absoluto de um número positivo é ele mesmo e o valor absoluto de um número negativo é ele multiplicado por -1.
//    Use variável local e não use a função nativa (abs) da linguagem.


//resposta 1:


#include <stdio.h>


int absoluteValue(int number) {
    if (number < 0) {
        return -number; 
    return number; 
}
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); 

    int result = absoluteValue(number); 
    printf("The absolute value of %d is %d\n", number, result); 

    return 0;
}






// 2)	Elabore o programa que faça a soma posicional entre dois vetores inteiros de cinquenta posições e armazene o resultado do cálculo num terceiro vetor.
//  Carregue(armazene) os valores nos dois vetores de uma das maneiras possíveis e mostre na tela de saída o conteúdo dos três vetores.
//   Lembrando que a soma posicional vai somar o conteúdo da posição 0 do primeiro vetor com o conteúdo da posição 0 do segundo vetor e o resultado armazena na posição 0 do terceiro vetor.
//    E assim sucessivamente.

//resposta 2:

#include <stdio.h>

#define VECTOR_SIZE 50 

int main() {
    int vector1[vector_size], vector2[vector_size], sum[vector_size];

 
    for(int i = 0; i < vector_size; i++) {
        vector1[i] = i; 
        vector2[i] = vector_size - i; 
    }

    
    for(int i = 0; i < vector_size; i++) {
        sum[i] = vector1[i] + vector2[i];
    }


    printf("Vector 1:\tVector 2:\tSum:\n");
    for(int i = 0; i < vector_size; i++) {
        printf("%8d\t%8d\t%8d\n", vector1[i], vector2[i], sum[i]);
    }

    return 0;
}
