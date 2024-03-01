#include <stdio.h>

int main() {
    
    int x, y, z = 0;

    printf("Digite o numero inicial:\n");
    scanf("%d", &x);
    printf("Digite o numero final:\n");
    scanf("%d", &y);
    if(x <= y){
	
    for (int i = x; i <= y; i++) {
        printf("%d\n", i);
        z++;
    }
    }
	else{
	for (int i = x; i >= y; i--) {
        printf("%d\n", i);
        z++;
    }	
	}
    printf("\nContador:%d", z);
    
    return 0;
}

