#include <stdio.h>

int main() {
    int valores[5];
    int i, posicaoMaior, posicaoMenor;
    int maior = -9999, menor = 9999;
    float media = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        media += valores[i];

        if (valores[i] > maior) {
            maior = valores[i];
            posicaoMaior = i;
        }

        if (valores[i] < menor) {
            menor = valores[i];
            posicaoMenor = i;
        }
    }

    media /= 5;

    printf("\nValores lidos: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nMaior valor: %d (posicao %d)", maior, posicaoMaior);
    printf("\nMenor valor: %d (posicao %d)", menor, posicaoMenor);
    printf("\nMedia dos valores: %.2f", media);

    return 0;
}

