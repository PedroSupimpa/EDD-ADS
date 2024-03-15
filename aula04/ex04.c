#include <stdio.h>

int main() {
    int i,
    maiorValor = 0,
	Num[5] = {-10,5,122,31,0};
	
	for(i = 0; i < 4; i++){
		if(Num[i] > maiorValor){
			maiorValor=Num[i];
		}

	};

	printf("Maior Valor:%d\n",maiorValor);

  

    return 0;
}

