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
int inicializarPila()
{
    apila.tope = -1;
    printf("La pila se creo correctamente");
}
bool pilaLlena()
{
    if(apila.tope== MAXPILA -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool pilaVacia()
{
    if(apila.tope == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


