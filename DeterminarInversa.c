#include <stdio.h>

#define TAM 3

void obtenerCofactor(float matriz[TAM][TAM], float temp[TAM][TAM], int p, int q, int n) {
    int i = 0, j = 0;

    for (int fila = 0; fila < n; fila++) {
        for (int col = 0; col < n; col++) {
            if (fila != p && col != q) {
                temp[i][j++] = matriz[fila][col];

                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

float determinarDeterminante(float matriz[TAM][TAM], int n) {
    float determinante = 0;

    if (n == 1)
        return matriz[0][0];

    float temp[TAM][TAM];
    int signo = 1;

    for (int f = 0; f < n; f++) {
        obtenerCofactor(matriz, temp, 0, f, n);
        determinante += signo * matriz[0][f] * determinarDeterminante(temp, n - 1);
        signo = -signo;
    }

    return determinante;
}

void obtenerAdjunta(float matriz[TAM][TAM], float adj[TAM][TAM]) {
    if (TAM == 1) {
        adj[0][0] = 1;
        return;
    }

    int signo = 1;
    float temp[TAM][TAM];

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            obtenerCofactor(matriz, temp, i, j, TAM);
            signo = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = signo * determinarDeterminante(temp, TAM - 1);
        }
    }
}

int generarInversa(float matriz[TAM][TAM], float inversa[TAM][TAM]) {
    float determinante = determinarDeterminante(matriz, TAM);
    if (determinante == 0) {
        printf("La matriz no tiene inversa (determinante es 0).\n");
        return 0;
    }

    float adj[TAM][TAM];
    obtenerAdjunta(matriz, adj);

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            inversa[i][j] = adj[i][j] / determinante;
        }
    }

    return 1;
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
    float matriz[TAM][TAM], inversa[TAM][TAM];

    printf("Ingrese los elementos de la matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    if (generarInversa(matriz, inversa)) {
        printf("Matriz inversa:\n");
        imprimirMatriz(inversa);
    }

    return 0;
}
