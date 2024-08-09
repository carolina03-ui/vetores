#include <stdio.h>

int main() {
    float valores[5];
    float soma = 0.0, media;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma / 5;

    printf("\nValores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", valores[i]);
    }

    printf("Média dos valores: %.2f\n", media);

    return 0;
}
