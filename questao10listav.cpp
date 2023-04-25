#include <stdio.h>

int main() {
   int notas[15];
   int soma = 0;
   float media;
   
   for (int i = 0; i < 15; i++) {
      printf("Digite a nota do aluno %d: ", i+1);
      scanf("%d", &notas[i]);
      soma += notas[i];
   }
   
   media = (float) soma / 15;
   
   printf("A media geral da turma foi: %.2f\n", media);
   
   return 0;
}

