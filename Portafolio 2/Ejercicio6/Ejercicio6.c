#include <stdio.h>
#include <stdlib.h>


/*Hacer una función calcule tu índice académico recibiendo como entrada el html de campus solutions que contenga tus calificaciones*/

void guardar_texto();
void leer_texto();
int suma(char * ruta_archivo);

int main(int argc, char *argv[]){
    int s;
    if (argc<2){
        printf("No se paso ningun archivo");
        system("PAUSE");
        return 0;
    } else if (argc>2){
        printf("Se pasaron muchos argumentos");
        system("PAUSE");
        return 0;
    }
    s = suma(argv[1]);
    printf("La suma es %d", s);
    system("PAUSE");
}

void guardar_texto(){
    FILE * pf;
    char buff[255];
    const char *ruta_archivo = "html.txt";
    int valor = 10;
    pf = fopen(ruta_archivo, "w+");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return;
    }
    fprintf(pf, "Mi texto %d", valor);
    fclose(pf);
}

void leer_texto(){
    FILE * pf;
    char buff[255];
    const char *ruta_archivo = "html.txt";
    int valor = 10;
    pf = fopen(ruta_archivo, "w+");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return;
    }
    fprintf(pf, "Mi texto %d", valor);
    fclose(pf);
}

int suma(char * ruta_archivo){
    FILE * pf;
    int n;
    int valor, suma=0;
    char buff[255];
    pf = fopen(ruta_archivo, "r");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return 0;
    }
    fscanf(pf, "%d", &n);
    for (int i = 0; i < n; ++i) {
        fscanf(pf, "%d", &valor);
        suma += valor;
    }
    fclose(pf);
    return suma;
}
