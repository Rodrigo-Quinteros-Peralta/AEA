#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#define MAXPILA 30

struct Pila
{
    int tope;
    int datos[MAXPILA];
};
struct Pila apila;
void menuPrincipal();

int ERRORPILALLENA = -1;
int ERRORPILAVACIA = -2;
int apilar(int dato)
{

     if(pilaLlena())
    {
        printf("La pila esta llena \n");
        return(ERRORPILALLENA);
    }
    else
    {
        printf("Ingrese el dato: \n");
        scanf("%d", &dato);
        apila.tope++;
        apila.datos[apila.tope]=dato;

    }
}
int mostrar ()
{
    int i = 0;
    if(pilaVacia())
    {
        printf("La pila esta vacia \n");
        return(ERRORPILAVACIA);
    }
    else
    {
        printf("Datos de la pila \n");

        for(i=apila.tope; i>=0; i--)
        {

           printf("%d Su posicion es %d \n", apila.datos[i], i);
        }
    }
}

