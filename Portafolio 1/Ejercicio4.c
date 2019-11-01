#include <stdio.h>
#include <stdlib.h>

/*Realice un programa que permita imprimir una línea de texto de manera inversa utilizando una función recursiva sin emplear arreglos. No Hacer Minunit*/

int cant_char(const char arr[], int pos);
void inver_cadena(const char arr[], char inv[], int pos, int cant);

int main()
{
    int cantcaracteres;

    printf("Ingrese la cantidad de caracteres: ");
    scanf("%d",&cantcaracteres);

    char h[cantcaracteres], inv[cantcaracteres];

    printf("\nIngrese la palabra a invertir: ");
    scanf("%s",h);

    //si le sale mal es poque no puso la cant de caracteres correcta


    inver_cadena(h, inv, 0, cant_char(h, 0));

    printf("%s", inv);

    return 0;
}

int cant_char(const char arr[], int pos) {
    if (arr[pos] == '\0')
        return pos - 1;
    return cant_char(arr, pos+1);
}

void inver_cadena(const char arr[], char inv[], int pos, int cant)
{
    if (cant < 0)
    {
        inv[pos] = '\0';
        return;
    }

    inv[pos] = arr[cant];
    inver_cadena(arr, inv, pos + 1, cant - 1);
}
