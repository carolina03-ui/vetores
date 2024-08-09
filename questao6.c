#include <stdio.h>

int main() {
    int vetor[10];
    int Pares = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            Pares++;
        }
    }

    printf("Número de valores pares no vetor: %d\n", Pares);

    return 0;
}
