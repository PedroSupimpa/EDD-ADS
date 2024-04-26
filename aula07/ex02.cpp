#include <stdio.h>


void troca(int *p_a, int *p_b){
	int tmp;
	tmp = *p_a;
	*p_a = *p_b;
	*p_b = tmp;
}

int main() {
 int a=25, b=12;
 troca(&a,&b);
 printf("a: %d, b: %d\n",a,b);
 
 return 0;
}

