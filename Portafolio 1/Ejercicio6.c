#include <stdio.h>
#include <stdlib.h>

/*Realice un programa que dado un arreglo de enteros permita realizar una búsqueda binaria recursiva, recibiendo en la función recursiva:
- El arreglo a recorrer.
- El elemento que se desea consultar.
- El índice inferior de la búsqueda.
- El índice superior de la búsqueda.*/

int busquedabinaria(int arreglo[], int l, int r, int num);

int main()
{
   int cantnumeros,i,num;

   printf("Ingresa la cantidad de n%cmeros para el arreglo: ");
   scanf("%d",&cantnumeros);

   int arreglo[cantnumeros];

   printf("Ingresa los elementos del arreglo en orden (si no est%c en orden se quedar%c esperando el nuevo n%cmero): \n",160,160,163);

   for(i=0;i<cantnumeros;i++){
        printf("\nN%cmero %d: ",163,i+1);
        do{
            scanf("%d",&arreglo[i]);
        }while (i>0 && arreglo[i]<arreglo[i-1]);
   }

   printf("\nIngresa el n%cmero a encontrar: ",163);
   scanf("%d",&num);

   int n = sizeof(arreglo)/ sizeof(arreglo[0]);

   int indice = busquedabinaria(arreglo, 0, n-1, num);

   if(indice==-1)
        printf("El elemento %d no se encuentra en el arreglo",num);
   else
        printf("El elemento %d se encuentra en el %cndice %d\n",num,161,indice);


   return 0;
}

int busquedabinaria(int arreglo[], int l, int r, int num)
{
   if (r >= l)
   {
        int mitad = l + (r - l)/2;

        if (arreglo[mitad] == num)
            return mitad;

        if (arreglo[mitad] > num)
            return busquedabinaria(arreglo, l, mitad-1, num);

        return busquedabinaria(arreglo, mitad+1, r, num);
   }

   return -1;
}
