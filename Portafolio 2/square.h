#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

//square.h

#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "Ejercicio10.c"
#define f1 'xba'
#define f2 'xbb'
#define f3 'xbc'
#define f4 'xcd'
#define f5 'xc8'
#define f6 'xc9'
void marco(int,int,int,int);
void marcob(int,int,int,int);//marco negro
void marcoc(int hor,int hmax,int ver,int vmax);
void cuadro(int hor,int xmax,int ver,int ymax);
void cuadro2(int hor,int hmax,int ver,int vmax);
void cuadro3(int hor,int hmax,int ver,int vmax);
void cuadro4(int hor,int hmax,int ver,int vmax);
void movimiento(int x,int y);
void gotoxy(int,int);
//marco completo
void marco(int hor,int hmax,int ver,int vmax)
{
     int vmin=ver,hmin=hor,cont=7;
     gotoxy(hor,ver);printf("%c",f6);
     for(ver=ver+1;ver<=vmax;ver++){
     gotoxy(hor,ver);printf("%c",f1);
}
     gotoxy(hor,ver);printf("%c",f5);
     for(hor=hor+1;hor<=hmax;hor++){
     gotoxy(hor,ver);printf("%c",f4);
}
     gotoxy(hor,ver);printf("%c",f3);
     for(ver=vmax;ver>vmin;ver--){
     gotoxy(hor,ver);printf("%c",f1);
}
     cont=32;
     gotoxy(hor,ver);printf("%c",f2);
     for(hor=hmax;hor>hmin;hor--){
     gotoxy(hor,ver);printf("%c",f4);
}
}
//marco negro
void marcob(int hor,int hmax,int ver,int vmax)
{
    int vmin=ver,hmin=hor,x1=hor;
    for(vmin=ver;vmin<=vmax;vmin++)
       {
       for(hmin=hor;hmin<=hmax;hmin++)
       {
       gotoxy(hor,ver);
       printf(" ");
       hor=hor+1;
       }
       hor=x1;
       ver++;
       }
       }
 //marco abierto en un extremo
void marcod(int hor,int hmax,int ver,int vmax)
{
     int vmin=ver,hmin=hor;
     gotoxy(hor,ver);printf("%c",f6);
     for(ver=ver+1;ver<=vmax;ver++){
     gotoxy(hor,ver);printf("%c",f1);
}
     gotoxy(hor,ver);printf("%c",f5);
     for(hor=hor+1;hor<=hmax;hor++){
     gotoxy(hor,ver);printf("%c",f4);
}
     gotoxy(hor,ver);printf("%c",f2);
     for(ver=vmax;ver>vmin;ver--){
     gotoxy(hor,ver);printf(" ");
}
     gotoxy(hor,ver);printf("%c",f3);
     for(hor=hmax;hor>hmin;hor--){
     gotoxy(hor,ver);printf("%c",f4);
}
}
//abierto por la derecha
void marcoc(int hor,int hmax,int ver,int vmax)
{
     int vmin=ver,hmin=hor;
     gotoxy(hor,ver);printf("%c",f5);
     for(ver=ver+1;ver<=vmax;ver++){
     gotoxy(hor,ver);printf(" ");
}
     gotoxy(hor,ver);printf("%c",f6);
     for(hor=hor+1;hor<=hmax;hor++){
     gotoxy(hor,ver);printf("%c",f4);
}
     gotoxy(hor,ver);printf("%c",f3);
     for(ver=vmax;ver>vmin;ver--){
     gotoxy(hor,ver);printf("%c",f1);
}
     gotoxy(hor,ver);printf("%c",f2);
     for(hor=hmax;hor>hmin;hor--){
     gotoxy(hor,ver);printf("%c",f4);
}
}
//abierto por arriba
void marcoe(int hor,int hmax,int ver,int vmax)
{
     int vmin=ver,hmin=hor;
     gotoxy(hor,ver);printf("%c",f2);
     for(ver=ver+1;ver<=vmax;ver++){
     gotoxy(hor,ver);printf("%c",f1);
}
     gotoxy(hor,ver);printf("%c",f5);
     for(hor=hor+1;hor<=hmax;hor++){
     gotoxy(hor,ver);printf("%c",f4);
}
     gotoxy(hor,ver);printf("%c",f3);
     for(ver=vmax;ver>vmin;ver--){
     gotoxy(hor,ver);printf("%c",f1);
}
     gotoxy(hor,ver);printf("%c",f6);
     for(hor=hmax;hor>hmin;hor--){
     gotoxy(hor,ver);printf(" ");
}
}
void cuadro(int hor,int hmax,int ver,int vmax)
{
     marco(hor,hmax,ver,vmax);
     marcob(hor+1,hmax-1,ver+1,vmax);
}
void cuadro2(int hor,int hmax,int ver,int vmax)
{
     marcoc(hor,hmax,ver,vmax);
     marcob(hor+1,hmax-1,ver+1,vmax);
}

void cuadro3(int hor,int hmax,int ver,int vmax)
{
     marcod(hor,hmax,ver,vmax);
     marcob(hor+1,hmax-1,ver+1,vmax);
}
void cuadro4(int hor,int hmax,int ver,int vmax)
{
     marcoe(hor,hmax,ver,vmax);
     marcob(hor+1,hmax-1,ver+1,vmax);
}

void gotoxy(int x,int y)
{
     HANDLE hConsoleOutput;
     COORD cursor_Pos={x,y};
     hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hConsoleOutput,cursor_Pos);
     }


#endif // SQUARE_H_INCLUDED
