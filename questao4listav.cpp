#include <stdio.h>

int main() {
    int vetor[8], x, y;
    
    printf("Digite 8 valores inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite as posi��es X e Y (entre 0 e 7):\n");
    scanf("%d %d", &x, &y);
    
    int soma = vetor[x] + vetor[y];
    
    printf("A soma dos valores nas posi��es %d e %d � %d.\n", x, y, soma);
    
    return 0;
}

