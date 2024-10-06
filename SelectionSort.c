#include <stdio.h>
#include <string.h>

int main() {

    int max = 5;
    int vetor[max];
    int i, j, menor, temp;

    for(i = 0; i < max; i++) {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < max - 1; i++) {
        menor = i; 

        for(j = i + 1; j < max; j++) {
            if(vetor[j] < vetor[menor]) {
                menor = j; 
            }
        }

        if(menor != i) {
            temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
        }
    }

    for(i = 0; i < max; i++) {
        printf("| %d ", vetor[i]);
    }

    return 0;
}
