#include <stdio.h>

int main() {
    int array[5] = {64, 25, 12, 22, 11};
    int tamanho = 5;
    int i, j;
    int indice_menor;
    int temp;

    printf("Array original: ");
    for(i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    for (i = 0; i < tamanho - 1; i++) {
        indice_menor = i;
        for (j = i + 1; j < tamanho; j++) {
            if (array[j] < array[indice_menor]) {
                indice_menor = j;
            }
        }
        temp = array[indice_menor];
        array[indice_menor] = array[i];
        array[i] = temp;

    }

    printf("\nArray ordenado: ");
    for(i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
