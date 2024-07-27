#include <stdio.h>

#define MAX_TAM 10

void generarTranspuesta(int matriz[MAX_TAM][MAX_TAM], int transpuesta[MAX_TAM][MAX_TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
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
    int matriz[MAX_TAM][MAX_TAM], transpuesta[MAX_TAM][MAX_TAM];
    
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

    generarTranspuesta(matriz, transpuesta, filas, columnas);

    printf("Matriz transpuesta:\n");
    imprimirMatriz(transpuesta, columnas, filas);

    return 0;
}
