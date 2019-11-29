 //ListaEnlasada.h
 #include <stdio.h>
 #include <stdlib.h>
 #include "square.h"

typedef struct Nodo {
        item *dato;
        struct Nodo *siguiente;
        }NODO;

 void InsertarLista(NODO **cab, item *x);
 void ImprimirLista(NODO *primero);
 void InsertarOrden(NODO **cab,item *valor) ;
Despues vamos a definir las funciones
//ListaEnlasada.cpp
typedef struct termino
     {
     float lit;
     float exp;
     }Termino;

typedef Termino item;
#include "ListaEnlasada.h"

void InsertarLista(NODO **cab, item *x)
{
     NODO *aux = (NODO *)malloc(sizeof(NODO));
     aux->dato = x;
     aux->siguiente = *cab;
     *cab = aux;
}

 //------------------------MOSTRAR LISTA------------------
 void ImprimirLista(NODO *cab)
 {
      system("cls");
      if(cab==NULL)
      {
      printf("La lista esta vacian");
      }
      else{
      printf("nel polinomio es:n");
      printf("n");
      while (cab != NULL) {
            printf( "%2.2f",cab->dato->lit);
            printf( "x^");
            printf( "%2.2f  +",cab->dato->exp);
            cab = cab->siguiente;
      }}
 }

void InsertarOrden(NODO **cab,item *valor)
    {
    NODO *nuevo,*back,*next;
    nuevo=(NODO *) malloc (sizeof(NODO));
    if(nuevo != NULL)
    {
       nuevo->dato=valor;
       nuevo->siguiente=NULL;
       back=NULL;
       next=(*cab);
       while(next != NULL && (valor->exp) < next->dato->exp)
          {
           back=next;
           next=next->siguiente;
          }
       if(back==NULL)
          {
           nuevo->siguiente=(*cab);
           (*cab)=nuevo;
          }
       else
       {
       back->siguiente=nuevo;
       nuevo->siguiente=next;
       }
    }
    else{printf("no hay espacio disponible en memoria");}
    }
Y por ultimo el programa principal "main"
#include "ListaEnlasada.cpp"
#include <windows.h>
void Sumarp(NODO *polmay,NODO *polmen);
void Multp(NODO *cab,NODO *cab2);
void derip(NODO **cab);
void Intp(NODO **cab);
char menu(void);
int polin(NODO **cab);

main()
{
char opc;
int a,b;
NODO *cab,*cab2;
char opc2;
cab=NULL;
cab2=NULL;
puts("ingresa el polinomio numero 1");
a=polin(&cab);
puts("ingresa el polinomio numero 2");
b=polin(&cab2);

do{
  opc=menu();
  switch (opc)
      {
      case 'i':ImprimirLista(cab);
      case 'a':{
           if(a>b)
           Sumarp(cab,cab2);
           else
           Sumarp(cab2,cab);
           break;}
      case 'b':{
           Multp(cab,cab2);
           break;}

      //      Derivar
      case 'c':
           {
           fflush(stdin);
           do
             {
             system("cls");
             puts("deseas obtener la derivada de: ");
             puts(" a) La derivada del primer polinomio");
             puts(" b) La derivada del segundo polinomio");
             puts(" c) Regresar menu principal");
             opc2=getchar();fflush(stdin);
             switch (opc2)
                    {
                    case 'a':{derip(&cab);break;}
                    case 'b':{derip(&cab2);break;}
                    case 'c':{printf(".");printf("..");Sleep(250);printf("...");Sleep(250);printf("....");}
                   default: {printf(".");printf("..");Sleep(250);printf("...");Sleep(250);printf("....");}
                   }
              }while(opc2!='c');
           break;
           }

      //        integral
      case 'd':fflush(stdin);
           do
             {
             system("cls");
             puts("deseas obtener la integral de: ");
             puts(" a) La integral del primer polinomio");
             puts(" b) La integral del segundo polinomio");
             puts(" c) Regresar menu principal");
             opc2=getchar();fflush(stdin);
             switch (opc2)
                    {
                    case 'a':{Intp(&cab);break;}
                    case 'b':{Intp(&cab2);break;}
                    case 'c':{printf(".");printf("..");Sleep(250);printf("...");Sleep(250);printf("....");}
                   default: {printf(".");printf("..");Sleep(250);printf("...");Sleep(250);printf("....");}
                   }
              }while(opc2!='c');
           break;
      }
  }while(opc!='e');

}

char menu(void)
{
char opc;
system("cls");
marco(1,77,1,24);
gotoxy(5,6);puts("Este programa realiza operaciones con polinomios n");
gotoxy(5,7);puts("Introduce el primer polinomio");
gotoxy(5,9);puts("   Elige una opcion a realizar n");
gotoxy(5,11);puts("    a) Sumar polinomios n");
gotoxy(5,12);puts("    b) Multiplicar polinomios n");
gotoxy(5,13);puts("    c) Derivar polinomios n");
gotoxy(5,14);puts("    d) Integrar polinomiosn");
gotoxy(5,16);puts("    e) Salirn");
return opc=getchar();
}
//---------Sumar polinomio--------------------------

void Sumarp(NODO *pol1,NODO *pol2)
   {
   int flag=0;
   NODO *suma=NULL,aux,*aux1;
   aux1=pol2;
   while(pol1 != NULL)
      {
      pol2=aux1;
      aux.dato=(item *) malloc (sizeof(item));
      while(pol2 != NULL)
         {
         if(pol1->dato->exp == pol2->dato->exp )
            {
            aux.dato->lit=pol1->dato->lit + pol2->dato->lit;
            aux.dato->exp=pol1->dato->exp;
            InsertarOrden(&suma,aux.dato);
            flag=1;
            }
            pol2=pol2->siguiente;
         }
         if(flag==0)
            {
            aux.dato->lit=pol1->dato->lit;
            aux.dato->exp=pol1->dato->exp;
            InsertarOrden(&suma,aux.dato);
            }
         pol1=pol1->siguiente;
         flag=0;
      }ImprimirLista(suma);printf("n");system("pause");
   }

void Multp(NODO *pol1,NODO *pol2)
{
int flag=0;
   NODO *mult=NULL,aux,*aux1;
   aux1=pol2;
   while(pol1 != NULL)
      {
      pol2=aux1;
      aux.dato=(item *) malloc (sizeof(item));
      while(pol2 != NULL)
         {

            aux.dato->lit=pol1->dato->lit * pol2->dato->lit;
            aux.dato->exp=pol1->dato->exp + pol2->dato->exp;
            InsertarOrden(&mult,aux.dato);
            flag=1;
            pol2=pol2->siguiente;
         }
         pol1=pol1->siguiente;
      }ImprimirLista(mult);printf("n");system("pause");
   }

//------esta funcion calcula la derivada del polinomio---------//
void derip(NODO **cab)
{
 ImprimirLista(&(**cab));
 NODO *auxiliar; /* lo usamos para recorrer la lista */
      auxiliar = (*cab);
      printf("nla derivada es :n");
      printf("n");
      while (auxiliar!=NULL) {
            printf( "%2.2f",(auxiliar->dato->lit)*(auxiliar->dato->exp));
            printf( "x^");
            printf( "%2.2f  +",(auxiliar->dato->exp)-1);
            auxiliar = auxiliar->siguiente;
      }printf("n");system("pause");
 }


//------esta funcion calcula la integral del polinimo----------//
void Intp(NODO **cab)
{
 ImprimirLista(&(**cab));
 NODO *auxiliar; /* lo usamos para recorrer la lista */
      auxiliar = (*cab);
      printf("nLa integral es :n");
      printf("n");
      while (auxiliar!=NULL) {
            printf( "%2.2f",(auxiliar->dato->lit));
            printf( "x^");
            printf( "%2.2f  +",(auxiliar->dato->exp)+1);
            printf( " / ");printf( "%2.2f  +",(auxiliar->dato->exp)+1);
            auxiliar = auxiliar->siguiente;
      }printf("n");system("pause");
}

//-------funcion lee un polinomio-------------------------------//
int polin(NODO **cab)
{
int cont=1;
char salir;
NODO nuevo,*aux;
aux=(*cab);
do{
   printf("n  introduce el coheficiente del %d termino : ",cont);
   nuevo.dato=(item *) malloc (sizeof(item));
   scanf("%f",&(nuevo.dato->lit));
   fflush(stdin);
   printf("  introduce el exponente del %d termino : ",cont);
   scanf("%f",&(nuevo.dato->exp));
   fflush(stdin);
   InsertarOrden(&(*cab),nuevo.dato);
   ImprimirLista((*cab));
   puts("n desea introducir otro termino presiona "s"  para salir presiona "n"");
   salir=getchar();
   cont++;
  }while(salir!='n');
}
