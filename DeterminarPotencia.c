#include <stdio.h>

#define TAM 3

void multiplicarMatrices(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void elevarMatriz(int matriz[TAM][TAM], int exponente, int resultado[TAM][TAM]) {
    int temp[TAM][TAM];
    int i, j;

    // Inicializar el resultado como la matriz identidad
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            resultado[i][j] = (i == j) ? 1 : 0;
        }
    }

    while (exponente > 0) {
        if (exponente % 2 == 1) {
            multiplicarMatrices(resultado, matriz, temp);
            for (i = 0; i < TAM; i++) {
                for (j = 0; j < TAM; j++) {
                    resultado[i][j] = temp[i][j];
                }
            }
        }

        multiplicarMatrices(matriz, matriz, temp);
        for (i = 0; i < TAM; i++) {
            for (j = 0; j < TAM; j++) {
                matriz[i][j] = temp[i][j];
            }
        }

        exponente /= 2;
    }
}

void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAM][TAM], resultado[TAM][TAM];
    int exponente;

    printf("Ingrese los elementos de la matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    elevarMatriz(matriz, exponente, resultado);

    printf("Matriz elevada a la potencia %d:\n", exponente);
    imprimirMatriz(resultado);

    return 0;
}
