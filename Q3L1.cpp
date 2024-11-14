#include <stdio.h>

int main() {
    int vetor[11];  
    int i;

    
    printf("Digite 11 valores para o vetor:\n");
    for (i = 0; i < 11; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

   
    printf("\nValor inicial: %d\n", vetor[0]);
    printf("Mediana (valor central): %d\n", vetor[5]);
    printf("Valor final: %d\n", vetor[10]);

    return 0;
}

