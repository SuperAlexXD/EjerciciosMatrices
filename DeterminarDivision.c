#include <stdio.h>

#define TAM 3

// Función para dividir una matriz por una matriz diagonal
void dividirMatrices(int matriz1[TAM][TAM], int matriz2[TAM][TAM], float resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz2[j][j] != 0) {
                resultado[i][j] = (float)matriz1[i][j] / matriz2[j][j];
            } else {
                printf("Error: División por cero en la posición (%d, %d)\n", i, j);
                return;
            }
        }
    }
}

void imprimirMatriz(float matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[TAM][TAM], matriz2[TAM][TAM];
    float resultado[TAM][TAM];
    
    printf("Ingrese los elementos de la primera matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz (debe ser diagonal):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    dividirMatrices(matriz1, matriz2, resultado);

    printf("Matriz resultante de la división:\n");
    imprimirMatriz(resultado);

    return 0;
}
