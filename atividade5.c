#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem inversa:\n");

    for (i = 4; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}