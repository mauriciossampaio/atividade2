#include <stdio.h>
#include <stdlib.h>

void min_max_array(int array[], int tamanho, int *menor, int *maior) {
	
	*menor = *maior = array[0];
    
	for (int i = 1; i < tamanho; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        } else if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main() {
    int tamanho;

    printf("quantidade de numeros: ");
    scanf("%d",&tamanho);

    int array[tamanho];

    printf("digite os numeros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d",&array[i]);
    }

    int maior, menor;

    min_max_array(array, tamanho, &menor, &maior);

    printf("maior numero: %d\n",maior);
    printf("menos numero: %d\n",menor);

    return 0;
}
