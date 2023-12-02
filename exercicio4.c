#include <stdio.h>
#include <string.h>

int contar_ocorrencias(int array[], int tamanho, int elemento) {
    int contagem = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            contagem++;
        }
    }
    return contagem;
}

int main() {
    int tamanho;

    printf("quantos numeros terao: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("digite os numeros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int elemento;

    printf("Digite o elemento de busca: ");
    scanf("%d", &elemento);

    int ocorrencias = contar_ocorrencias(array, tamanho, elemento);

    printf("o numero %d aparece %d vezes \n", elemento, ocorrencias);

    return 0;
}
