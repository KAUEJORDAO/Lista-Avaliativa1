#include <stdio.h>

int main() {
    float vetor[10], somaPositivos = 0;
    int i, contNegativos = 0;

    printf("Digite 10 numeros reais:\n");
    for(i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        if(vetor[i] < 0) {
            contNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", contNegativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}

