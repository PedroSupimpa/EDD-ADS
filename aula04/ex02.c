#include <stdio.h>

int main() {
    int i;
    float numero[4];
     int ct = 0;
    printf("Entrada de dados:\n");

    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &numero[i]);
    }

    float media = 0;
   

    for (i = 0; i < 4; i++){
		ct++;	
        media += numero[i];
		}
    media /= ct;

    printf("Media da turma: %.2f\n", media);
    printf("Contador:%d\n", ct);
    printf("Notas dos alunos:\n");
    for (i = 0; i < 4; i++) {
        printf("|Aluno:%d | Nota:%.2f|", i+1, numero[i]);
    }

    return 0;
}

