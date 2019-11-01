#include <stdio.h>
#include <stdlib.h>

/*Programar un algoritmo recursivo que permita sumar los elementos de una matriz de enteros.*/

//int suma(int matriz[][],int fils, int cols, int orden);

int main()
{
   int fils,cols,i,j,orden;

   int matriz[fils][cols];

   printf("Ingresa la cantidad de filas para el arreglo: ");
   scanf("%d",&fils);

   printf("Ingresa la cantidad de columnas para el arreglo: ");
   scanf("%d",&cols);


   printf("Ingresa los elementos de la matriz: \n");

   for(i=0;i<fils;i++){
        for(j=0;j<cols;j++){
            printf("\nN%cmero %d: ",163,i+1);
            scanf("%d",&matriz[i][j]);
        }
   }

   printf("\nResultado: ");


   return 0;

}

/*int suma(int matriz[][],int fils, int cols, int orden)
  {
      if (fils==0 && cols==0)
            return matriz [0][0];

      else{
            if (cols < 0)
                return suma (fils - 1, orden, orden, matriz);
      }

      else
            return matriz [fils] [cols] + suma (fils, cols - 1, orden, matriz);
  }
*/
