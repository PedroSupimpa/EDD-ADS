#include <stdio.h>

int calculate(int value, int value2) {
    int soma = value + value2;
    return soma;
}

int main() {
    int inputValue;
	int inputValue2;
    printf("Insert a value:\n");
    scanf("%d", &inputValue);
	printf("Insert other value:\n");
    scanf("%d", &inputValue2);
   
    int result = calculate(inputValue, inputValue2);

 
    printf("\nThe some of the values is: %d", result);

    return 0;
}

