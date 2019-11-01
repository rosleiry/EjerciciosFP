#include <stdio.2h>
#include <stdlib.h>

/*Programar un algoritmo recursivo que permita sumar los elementos de una matriz de enteros.*/

int suma(int arreglo[],int num);

int main()
{
   int cantnumeros,i,num;

   printf("Ingresa la cantidad de n%cmeros para el arreglo: ");
   scanf("%d",&cantnumeros);

   int arreglo[cantnumeros];

   printf("Ingresa los elementos del arreglo: \n");

   for(i=0;i<cantnumeros;i++){
        printf("\nN%cmero %d: ",163,i+1);
        scanf("%d",&arreglo[i]);
   }

   printf("\nResultado: ");
   suma(arreglo,num);

}

int suma(int arreglo[], int num) {

    if (num==0)
        return arreglo[num];

    else
        return suma(arreglo,num-1)+arreglo[num];

}
