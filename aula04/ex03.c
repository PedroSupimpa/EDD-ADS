#include <stdio.h>
#define N 5
int main() {
    int i,somaPar = 0,somaImpar = 0,
		Num[N] = {10,-5,185};
	
	for(i = 0; i < N; i++){
		if(i % 2 ==0){
			somaPar+=Num[i];
		}else{
		somaImpar+=Num[i];
		}
	};
	
	printf("Soma numeros pares:%d\n",somaPar);
	printf("Soma numeros impares:%d\n",somaImpar);
  

    return 0;
}

