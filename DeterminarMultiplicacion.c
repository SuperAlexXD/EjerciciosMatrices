#include <stdio.h>

#define MAX_TAM 10

void multiplicarMatrices(int matriz1[MAX_TAM][MAX_TAM], int matriz2[MAX_TAM][MAX_TAM], int resultado[MAX_TAM][MAX_TAM], int filas1, int columnas1, int columnas2) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
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
    int filas1, columnas1, filas2, columnas2;
    int matriz1[MAX_TAM][MAX_TAM], matriz2[MAX_TAM][MAX_TAM], resultado[MAX_TAM][MAX_TAM];
    
    printf("Ingrese el número de filas y columnas de la primera matriz (filas columnas): ");
    scanf("%d %d", &filas1, &columnas1);

    printf("Ingrese el número de filas y columnas de la segunda matriz (filas columnas): ");
    scanf("%d %d", &filas2, &columnas2);

    if (columnas1 != filas2) {
        printf("Las matrices no se pueden multiplicar.\n");
        return 1;
    }

    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    multiplicarMatrices(matriz1, matriz2, resultado, filas1, columnas1, columnas2);

    printf("Matriz resultante de la multiplicación:\n");
    imprimirMatriz(resultado, filas1, columnas2);

    return 0;
}
