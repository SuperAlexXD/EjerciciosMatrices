#include <stdio.h>

#define MAX_TAM 10

void restarMatrices(int matriz1[MAX_TAM][MAX_TAM], int matriz2[MAX_TAM][MAX_TAM], int resultado[MAX_TAM][MAX_TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void imprimirMatriz(int matriz[MAX_TAM][MAX_TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int filas, columnas;
    int matriz1[MAX_TAM][MAX_TAM], matriz2[MAX_TAM][MAX_TAM], resultado[MAX_TAM][MAX_TAM];
    
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    restarMatrices(matriz1, matriz2, resultado, filas, columnas);

    printf("Matriz resultante de la resta:\n");
    imprimirMatriz(resultado, filas, columnas);

    return 0;
}
