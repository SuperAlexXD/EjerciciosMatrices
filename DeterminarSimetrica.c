#include <stdio.h>

#define MAX_TAM 10

void generarSimetrica(int matriz[MAX_TAM][MAX_TAM], int simetrica[MAX_TAM][MAX_TAM], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            simetrica[i][j] = matriz[j][i];
        }
    }
}

void imprimirMatriz(int matriz[MAX_TAM][MAX_TAM], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tam;
    int matriz[MAX_TAM][MAX_TAM], simetrica[MAX_TAM][MAX_TAM];
    
    printf("Ingrese el tamaño de la matriz cuadrada (máximo %d): ", MAX_TAM);
    scanf("%d", &tam);

    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    generarSimetrica(matriz, simetrica, tam);

    printf("Matriz simétrica:\n");
    imprimirMatriz(simetrica, tam);

    return 0;
}
