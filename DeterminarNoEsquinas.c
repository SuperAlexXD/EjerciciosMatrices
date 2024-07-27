#include <stdio.h>

#define MAX_TAM 10

void imprimirNoEsquinas(int matriz[MAX_TAM][MAX_TAM], int filas, int columnas) {
    printf("Elementos que no están en las esquinas:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (!((i == 0 && j == 0) || (i == 0 && j == columnas-1) || (i == filas-1 && j == 0) || (i == filas-1 && j == columnas-1))) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int filas, columnas;
    int matriz[MAX_TAM][MAX_TAM];
    
    printf("Ingrese el número de filas (máximo %d): ", MAX_TAM);
    scanf("%d", &filas);
    printf("Ingrese el número de columnas (máximo %d): ", MAX_TAM);
    scanf("%d", &columnas);

    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimirNoEsquinas(matriz, filas, columnas);

    return 0;
}
