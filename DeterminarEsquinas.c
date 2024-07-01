/**
 * @file EjercicioMatriz.c
 * @author Santiago Villamagua (santiago.villamagua@unl.edu.ec)
 * @brief Este forma parte de una serie de programas relacionados a la valoración de una matriz cuadrada
 * @version 0.1
 * @date 2024-07-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#define DIMENSIONMAXIMA 10 //Definimos la dimension maxima que puede tomar la matriz ingresada

int dimension; 

int main(int argc, char const *argv[]){
    printf("Cuantas dimensiones tiene la matriz a ingresar: ");//Solicita una cantidad de dimensiones
    scanf("%i", &dimension);
    if (dimension > DIMENSIONMAXIMA){
        printf("Tienes que ingresar una cantidad menor a 10, por favor intenta nuevamente");
        return 1;
    }
    int matriz[dimension][dimension];//Definimos la matriz inicial

    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            printf("Ingrese un valor para incluir en la matriz: ");//Se solicitan los valores hasta completar la matriz
            scanf("%i", &matriz[i][j]);
        }
        
    }

    for(int i = 0; i < dimension; i++){//Esta sección se emplea para construir la matriz
        for(int j = 0; j < dimension; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

int matrizEsquinas[2][2];//Se define la matriz para las esquinas
    matrizEsquinas[0][0] = matriz[0][0];
    matrizEsquinas[0][1] = matriz[0][dimension - 1];
    matrizEsquinas[1][0] = matriz[dimension - 1][0];
    matrizEsquinas[1][1] = matriz[dimension - 1][dimension - 1];

    printf("La matriz elaborada a partir de los numeros de las esquinas es:\n");//Se usa para imprimir una matriz nueva a partir de los datos de las esquinas
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", matrizEsquinas[i][j]);
        }
        printf("\n");
    }
    
    printf("La matriz ingresada es de %dx%d", dimension, dimension);//Esta linea sirve para reconocer las dimensiones de la matriz
    return 0;
}
