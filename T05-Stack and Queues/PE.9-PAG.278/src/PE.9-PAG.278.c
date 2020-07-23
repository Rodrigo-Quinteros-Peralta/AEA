/*
 ============================================================================
 Name        : PE.9-PAG.278.c
 Author      : Grupo 5
 Version     : Final

 Description : Write	a	program	to	create	a	queue	from	a	stack
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void push1(int);
void push2(int);
int pop1();
int pop2();
void agregar();
void eliminar();
void mostrar();
void create();

int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;

void main()
{
    int ch;

    printf("\n\n ***** EJERCICIO 9 - PAG.278 *****");
    printf("\n1) Poner un elemento en la cola");
    printf("\n2) Quitar un elemento de la cola");
    printf("\n3) Mostar elementos de la cola");
    printf("\n4) Salir del programa");
    create();
    while (1)
    {
        printf("\nIngrese una opcion: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            agregar();
            break;
        case 2:
            eliminar();
            break;
        case 3:
            mostrar();
            break;
        case 4:
            exit(0);
        default:
             printf("\nLa opcion elegida no existe");
        }
    }
}


void create()
{
    top1 = top2 = -1;
}


void push1(int data)
{
    st1[++top1] = data;
}


int pop1()
{
    return(st1[top1--]);
}


void push2(int data)
{
    st2[++top2] = data;
}


int pop2()
{
    return(st2[top2--]);
}


void agregar()
{
    int data, i;

    printf("Ingresar un dato a la cola: ");
    scanf("%d", &data);
    push1(data);
    count++;
}



void eliminar()
{
    int i;

    for (i = 0;i <= count;i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for (i = 0;i <= count;i++)
    {
        push1(pop2());
    }
}


void mostrar()
{
    int i;

    for (i = 0;i <= top1;i++)
    {
        printf(" %d ", st1[i]);
    }
}
