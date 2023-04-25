#include <stdio.h>

#define TAM 10 

int main() {
    float vet1[TAM], vet2[TAM]; 
    int i;

    printf("Digite os %d elementos do vetor:\n", TAM);
    for(i = 0; i < TAM; i++) {
        scanf("%f", &vet1[i]);
    }

    for(i = 0; i < TAM; i++) {
        vet2[i] = vet1[i] * vet1[i];
    }

    printf("Vetor de entrada: ");
    for(i = 0; i < TAM; i++) {
        printf("%.2f ", vet1[i]);
    }

    printf("\nVetor resultante: ");
    for(i = 0; i < TAM; i++) {
        printf("%.2f ", vet2[i]);
    }

    return 0;
}

