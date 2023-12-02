#include <stdio.h>
#include <string.h>

void multiplicar_arrays(int array1[], int array2[], int resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] * array2[i];
    }
}

int main() {
    int tamanho, i;
    
    printf("quantidade de numeros: ");
    scanf("%d", &tamanho);

    int array1[tamanho], array2[tamanho], resultado[tamanho];

    printf("digite os numeros primeiro array:\n");
    for (i = 0; i < tamanho; i++) {
        printf("numero do primeiro %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("digite os numeros do segundo array:\n");
    for (i = 0; i < tamanho; i++) {
        printf("numero do segundo %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    multiplicar_arrays(array1, array2, resultado, tamanho);

    printf("resultado:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
