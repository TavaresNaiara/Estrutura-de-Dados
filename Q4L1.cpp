//Autor: Naiara Tavares   Data: 14.11.2024
// Questão 4 lista 1

#include <stdio.h>
#include <stdbool.h>

#define TOTAL_NUMEROS 100
#define APOSTA_TAMANHO 50

void inicializaVetor(char vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = 0;
    }
}

void exibeVetor(char vetor[], int tamanho) {
    printf("Numeros marcados (Aposta): ");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 1) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}

void apostaEspelho(char vetor[], int tamanho) {
    printf("Aposta espelho (Numeros não marcados): ");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}

int main() {
    char vetor[TOTAL_NUMEROS] = {0};
    int numero;

    printf("Digite os 50 números da sua aposta (de 1 a 100):\n");

    for (int i = 0; i < APOSTA_TAMANHO; i++) {
        do {
        	
            printf("Número %d: ", i + 1);
            scanf("%d", &numero);
            

            if (numero < 1 || numero > 100) {
                printf("Número invalido! Deve ser entre 1 e 100.\n");
            } else if (vetor[numero - 1] == 1) {
                printf("Número ja foi marcado! Escolha outro.\n");
            } else {
                vetor[numero - 1] = 1;
                break;
            }
        } while (numero < 1 || numero > 100 || vetor[numero - 1] == 1);
    }

    exibeVetor(vetor, TOTAL_NUMEROS);
    apostaEspelho(vetor, TOTAL_NUMEROS);

    return 0;
}

