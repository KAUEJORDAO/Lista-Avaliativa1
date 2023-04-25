
#include <stdio.h>

int main() {
    int vetor[10];
    int i, count_pares = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            count_pares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", count_pares);

    return 0;
}

