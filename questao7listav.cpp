#include <stdio.h>

int main() {
    int numeros[10];
    int maior = numeros[0];
    int posicao_maior = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao_maior = i;
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Maior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", posicao_maior);

    return 0;
}

