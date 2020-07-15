/*
 ============================================================================
 Name        : Trabajo1.c
 Author      : Grupo 05
 Version     :
 Copyright   : Your copyright notice
 Description :
 • Implementar todas las operaciones vistas en la pila;
• Implemente un programa principal que use la pila a través de un menú con los siguientes elementos: apilar, desapilar, limpiar, mostrar pila, salir del programa. Utilice el marco de programación del interruptor "C" para esto;
• al mostrar la pila, el programa debe colocar su posición en el vector debajo de cada dato. Utilice las opciones de tamaño de campo de impresión printf () para esto;
• la batería tendrá un tamaño máximo de 30, definida como una constante llamada MAXPILHA. Use esta constante para definir la estructura de datos que será la pila;
• la pila será referenciada por una variable global.
 ============================================================================
 */

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
