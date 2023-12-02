#include <stdio.h>
#include <stdlib.h>

int somaArray(int array[], int tamanho) {
    int soma, i;
    for (i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int tamanho;

    printf("digite quantos numeros terao: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("digite os numeros:\n");
    
    for (int i = 0; i < tamanho; i++) {
        printf("numero:", i + 1);
        scanf("%d", &array[i]);
    }

    int resultado = somaArray(array, tamanho);
    printf("resultado: %d\n", resultado);

    return 0;
}
