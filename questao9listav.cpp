#include <stdio.h>

int main() {
    int valores[6];
    
    printf("Digite 6 valores pares:\n");
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
        
        while (valores[i] % 2 != 0) {
            printf("Digite um valor par: ");
            scanf("%d", &valores[i]);
        }
    }
    
    printf("Valores digitados na ordem inversa:\n");
    
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }
    
    return 0;
}

