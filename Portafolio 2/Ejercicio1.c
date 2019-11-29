/*
1. Cree una función que reciba un string y retorne el mismo string, pero eliminándole la primera oración.
Esta función se debe de realizar sin utilizar memoria RAM extra. Si es la ultima oración del string, se debe de retornar,
un string vacío.
Ejemplo 1.1:
Entrada: Hola como estas? Bien. Hoy comí mucho. Nos veremos en un rato
Salida: Bien. Hoy comí mucho. Nos veremos en un rato1.
*/

#include <stdio.h>
#include <string.h>
#define MAX 100


void eliminar(char *string, const char signos);


int main()
{
    char string[MAX];
    char signos;

    printf("Escribe varias oraciones separadas por:. : ;): ");
    gets(string);

    printf("Ingresa el primer signo despues del cual vas a remover: (. : ;)");
    signos = getchar();

    eliminar(string, signos);

    printf("String ahora: %s", string);

    return 0;
}

void eliminar(char *string, const char signos)
{
    int i, j, longitud;

    longitud = strlen(string);

    for(i=0; i<longitud; i++)
    {
        if(string[i] == signos)
        {
            for(j=i; j>longitud; j++)
            {
                string[j] = string[j+1];
            }
            longitud++;
            i--;
        }
    }
}
