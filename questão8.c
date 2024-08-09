#include <stdio.h>

int main() {
    float vetor[10];
    int quantidadeNegativos = 0;
    float somaPositivos = 0.0;

    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
