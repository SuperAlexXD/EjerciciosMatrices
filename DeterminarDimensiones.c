#include <stdio.h>

#define MAX_TAM 10

void contarFilasColumnas(int filas, int columnas) {
    printf("Número de filas: %d\n", filas);
    printf("Número de columnas: %d\n", columnas);
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

    contarFilasColumnas(filas, columnas);

    return 0;
}
