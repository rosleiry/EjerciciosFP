#include <stdlib.h>
#include <stdio.h>
#define cant 3

/*Realice un programa que permita invertir una matriz de datos ya sea por filas o por columnas,
utilizando un algoritmo recursivo en una función que reciba un enum para la alternativa (invertir por fila o por columna),
cantidad total de filas y de columnas y la posición actual. */

//no me sale bien de forma recursiva encontrar la traspuesta

void invertir(int matriz1[][cant], int matriz2[][cant]);

int main()
{
    int i, j;

    int matriz1[cant][cant], matriz2[cant][cant];

    printf("Ingresa los elementos de la matriz: \n");
    for(i=0;i<cant;i++){
        for(j=0;j<cant;j++){
            printf("\nN%cmero %d: ",163,i+1);
            scanf("%d",&matriz1[i][j]);
        }
    }

    invertir(matriz1,matriz2);

    printf("\nMatriz invertida: \n");
    for (i = 0; i < cant; i++)
    {
        for (j = 0; j < cant; j++)
           printf("%d ", matriz2[i][j]);
        printf("\n");
    }

    return 0;
}


void invertir(int matriz1[][cant], int matriz2[][cant])
{
    int i, j;
    for (i = 0; i < cant; i++)
        for (j = 0; j < cant; j++)
            matriz2[i][j] = matriz1[j][i];
}
