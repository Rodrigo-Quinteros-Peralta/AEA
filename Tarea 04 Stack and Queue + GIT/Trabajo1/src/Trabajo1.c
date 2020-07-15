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

int desempilar()
{
    if(pilaVacia())
    {
        printf("ERROR: La pila esta vacia no intente desempilar!!!");
        return(ERRORPILAVACIA);
    }
    else
    {
    	printf("SE DESEMPILO CORRECTAMENTE!!!");
        apila.tope--;;

    }
}
int limpiarPila()
{
apila.tope = -1;

        printf("SE LIMPIO LA PILA. AHORA SE ECUENTRA VACIA!!!");

}

