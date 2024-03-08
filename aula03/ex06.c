#include <stdio.h>

int soma(int value, int value2) {
    int soma = value + value2;
    return soma;
}
int subtracao(int value, int value2) {
    int subtraction = value - value2;
    return subtraction;
}


int main() {
    int inputValue;
	int inputValue2;
    printf("Insert a value:\n");
    scanf("%d", &inputValue);
	printf("Insert other value:\n");
    scanf("%d", &inputValue2);
   
    int resultsoma = soma(inputValue, inputValue2);
    
     int resultsubtracao = subtracao(inputValue, inputValue2);

 
    printf("\nThe some of the values is: %d", resultsoma);
    printf("\nThe some of the values is: %d", resultsubtracao);

    return 0;
}

