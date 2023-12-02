#include <stdio.h>
#include <string.h>

int existe_string_no_array(char *array[], int tamanho, char *busca) {
	int i;
    for (i = 0; i < tamanho; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int tamanho, i;

    printf("quantidade de numeros : ");
    scanf("%d", &tamanho);

    char *array[tamanho];
    
    printf("digite os numeros:\n");
    for ( i = 0; i < tamanho; i++) {
    
        array[i] = (char *)malloc(100 * sizeof(char));
        printf("numeros %d: ", i + 1);
        scanf("%s", array[i]);
    }


    char busca[50];
    printf("digite sua busca: ");
    scanf("%s", busca);

    if (existe_string_no_array(array, tamanho, busca)) {
        printf("1\n"); 
    } else {
        printf("0\n"); 
    }

    for ( i = 0; i < tamanho; i++) {
        free(array[i]);
    }

    return 0;
}
