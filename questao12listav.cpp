#include <stdio.h>

int main() {
    float vetor[5];
    float maior = 0, menor = 0, soma = 0, media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);

        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }

        soma += vetor[i];
    }

    media = soma / 5;

    printf("Valores lidos:");
    for (i = 0; i < 5; i++) {
        printf(" %.2f", vetor[i]);
    }

    printf("\nMaior valor: %.2f", maior);
    printf("\nMenor valor: %.2f", menor);
    printf("\nMédia dos valores: %.2f", media);

    return 0;
}

