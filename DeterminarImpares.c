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
int paridad = 1;//Este se empleara para contear los datos pares

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
            if (paridad % 2 != 0){
                printf("%d ", matriz[i][j]);//Esta linea presenta el numero si el casillero que ocupa es impar
            }
            else
                printf("x ");//Si el espacio es par se llena con una x
        paridad++;
        }
        printf("\n");//Proyecta el salto de linea entre cada fila
    }
    printf("La matriz ingresada es de %dx%d", dimension, dimension);//Esta linea sirve para reconocer las dimensiones de la matriz
    return 0;
    //NOTA: Es recomendable ingresar cantidades con una sola cifra, ya que se arruina la presentacion de la matriz conformada, no provoca fallos, pero se ve visualmente mejor
}
