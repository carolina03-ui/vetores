#include <stdio.h>

int main() {
    int a[6] = {1, 0, 5, -2, -5, 7};
    int soma; 

    soma = a[0] + a[1] + a[5];
    
    printf("Soma dos valores nas posições a[0], a[1] e a[5]: %d\n", soma);

    a[4] = 100;

    printf("Valores do array a:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
