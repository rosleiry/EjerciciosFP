#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/*
programa para verificar la validez de una password
a. Por lo menos 1 letra minúscula

b. Por lo menos 1 letra mayúscula

c. Por lo menos 1 un dígito [0-9]

d. Tamaño mínimo: 7 caracteres

e. El password no puede ser “password”, “contraseña”, “clave”. (case-insentive)
*/

void verificar(char contrasena[]);

int main()
{
    char contrasena[40];

    printf("Digita una contrase%ca que: \n-Por lo menos 1 letra min%cscula \n-Por lo menos 1 letra may%cscula\n-Por lo menos 1 un d%cgito [0-9]\n-El password no puede ser password, contrase%ca, clave.\n-Tama%co m%cnimo: 7 caracteres\n",164,163,163,161,164,164,161);
    scanf("%s",contrasena);

    verificar(contrasena);

    return 0;
}

void verificar(char contrasena[])
{
    int longitud,caso1,caso2,caso3,caso4,caso5,i;

    longitud=strlen(contrasena);

    if(longitud<7)//longitud menor que 7
    caso1=1;
    else
    {
        for(i=0;i<longitud;i++)
        if((contrasena[i]>=48&&contrasena[i]<=57)) //Digitos [0,9]
        {
            caso2=0;

            break;
        }
        else
        caso2=1;

        for(i=0;i<longitud;i++)
        if((contrasena[i]>=65&&contrasena[i]<=90)) //mayuscula
        {
            caso3=0;

            break;
        }
        else
        caso3=1;

        for(i=0;i<longitud;i++)
        if((contrasena[i]>=97&&contrasena[i]<=122)) //minuscula
        {
            caso4=0;

            break;
        }
        else
        caso4=1;


        if(contrasena=="contrasena"||contrasena=="password"||contrasena=="clave")
        {
            caso5=0;
        }
        else
        caso5=1;


    }

    if(caso1==1||caso2==1||caso3==1||caso4==1||caso5==1)
    printf("\nContrase%ca inv%clida\n",164,160);
    else
    printf("Contrase%ca v%clida\n",164,160);


}
