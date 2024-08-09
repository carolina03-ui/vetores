#include <stdio.h>

int main() {
    int x[10];
    int maior, menor;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    maior = menor = x[0];

    for (int i = 1; i < 10; i++) {
        if (x[i] > maior) {
            maior = x[i];
        }
        if (x[i] < menor) {
            menor = x[i];
        }
    }

    printf("O maior valor do vetor é: %d\n", maior);
    printf("O menor valor do vetor é: %d\n", menor);

    return 0;
}
