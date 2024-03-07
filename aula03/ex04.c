#include <stdio.h>

int calculate_double(int value) {
    int doubleValue = value * 2;
    return doubleValue;
}

int main() {
    int inputValue;

    printf("Insert a value:\n");
    scanf("%d", &inputValue);

   
    int result = calculate_double(inputValue);

 
    printf("\nThe double of this value is: %d", result);

    return 0;
}

