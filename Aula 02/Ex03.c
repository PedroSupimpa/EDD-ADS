#include <stdio.h>

int main() {
    

    printf("\nNumeracao ate 12:\n");
	int count = 0;
    for (int i = 0; i <= 12; i += 2) {
        printf("%d\n", i);
        count ++;
    }
	printf("\nContador:%d",count);
	
    return 0;
}

