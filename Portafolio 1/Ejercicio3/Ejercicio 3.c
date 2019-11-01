#include <stdio.h>
#include <stdlib.h>
#include "Ejercicio3.h"

/*Realice un programa que, utilizando una librería propia haga una llamada a una función esPrimo() para generar los primeros N números primos,
según especifique el usuario*/


int main()
{
    int rinf, rsup, i;

    printf("Para generar los primeros N n%cmeros primos en un rango,ingrese el rango inferior y superior separados por coma respectivamente: ");

    do{
        scanf("%d%d",&rinf,&rsup);
        if(rinf<=0 || rsup<=0 || rinf>=rsup){
            printf("\nIntente de nuevo: ");
        }
    }while(rinf<=0 || rsup<=0 || rinf>=rsup);

    for(i=rinf;i<=rsup;i++)
    {
       if(esprimo(i)==0)
         printf("El valor %d es primo\n",i);
    }


}




