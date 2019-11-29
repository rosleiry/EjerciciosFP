#include<stdlib.h>
#include <stdio.h>

/*
5. Hacer una función que lea un string usando memoria dinámica (No hacer minunit).
La función debe de devolver la dirección de memoria reservada
*/

char *leerstring(char *stri)
{
    char *string, buffer[100];

    printf("%s", stri);
    scanf("%s", buffer); //lee el string en el buffer

    string = (char*) malloc(strlen(buffer) + 1);

   // strcpy(string, buffer);

    return string;
}

int main ()

{

   char *stri;

   stri = leerstring("Escribe algo: ");
   printf("Escribiste: %s\n", stri);
   printf("Direcci%cn de memoria reservada: %p", 162, stri);

   free(stri);

   return 0;

}

//direccion de memoria:
//printf("DM %u %d", %x);
