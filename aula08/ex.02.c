#include <stdio.h>

void printVector(int *V, int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("Valor do vetor[%d]: %d\n", i, V[i]);
    }
}

void selectSort(int *V, int N) {
    int i, j, menor,troca;
    
    for(i=0; i< N- 1; i++){

    	 menor = i;
    	 
		for(j=i+1; j < N; j++){
			if(V[j] < V[menor]){
				menor = j;
			};
			

		
		};
			if(i != menor){
				troca = V[i];
            	V[i] = V[menor];
            	V[menor] = troca;		
										
			};
	};
    
   
}

int main() {
    int vet[5] = {23, 4, 67, -8, 21};
    printf("Sem ordenar:\n");
    printVector(vet, 5);
    
    selectSort(vet,5);
    printf("Ordenado:\n");
    printVector(vet,5);
    

    return 0;
}

