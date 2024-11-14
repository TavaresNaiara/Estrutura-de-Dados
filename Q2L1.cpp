//Autor: Naiara Tavares   Data: 14.11.2024
// Questão 2 lista 1
#include <stdio.h>

typedef struct {
    char c;          
    int i;           
    double d;        
} MinhaStruct;


typedef union {
    char c;          
    int i;          
    double d;        
} MinhaUnion;

int main() {
    
    printf("Tamanho da struct: %zu bytes\n", sizeof(MinhaStruct));
    printf("Tamanho da union: %zu bytes\n", sizeof(MinhaUnion));

    return 0;
}

