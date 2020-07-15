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

int tope()
{
    if(pilaVacia)
    {
        printf("ERROR: La pila esta vacia no se puede acceder!!!");
        return(ERRORPILAVACIA);
    }
    else
    {
        return(apila.datos[apila.tope]);
    }
}
int main()
{
    int opcion;
    int d;
    do
    {
        menuPrincipal();
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 0:
            exit(1);
            break;
        case 1:
           inicializarPila() ;
             printf("\n");
            system("pause");
            break;
        case 2:
            apilar(d);
            system("pause");
            break;
        case 3:
            mostrar();
            printf("\n");
            system("pause");
            break;
        case 4:
            desempilar();
            printf("\n");
            system("pause");
            break;
        case 5:
            limpiarPila();
            printf("\n");
            system("pause");
            break;

        }
        system("cls");
    }
    while(opcion !=6);
    getch();
        return 0;
}
void menuPrincipal()
{
    printf("\n\n ***** TRABAJO1 - PILAS *****");
    printf("\n\n     ***** GRUPO 5 *****     ");
    printf("\n 1:  CREAR PILA");
    printf("\n 2:  INGRESAR UN DATO A LA PILA");
    printf("\n 3:  MOSTRAR LA PILA");
    printf("\n 4:  DESEMPILAR");
    printf("\n 5:  LIMPIAR LA PILA");
    printf("\n\n 0: SALIR");
    printf("\n\n INGRESAR UNA OPCION : ");
}


