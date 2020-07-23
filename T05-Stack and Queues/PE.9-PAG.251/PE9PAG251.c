/*
 ============================================================================
 Name        : PE.9-PAG.251.c
 Author      : Grupo 5
 Version     : Final

 Description : Escriba un programa para calcular F (M, N) donde F (M, N) puede definirse recursivamente como:
F (M, N) = 1 si M = 0 o M=N=1
y F (M, N) = F (M – 1, N) + F (M – 1, N – 1), de lo contrario
 ============================================================================
 */

#include <stdio.h>
int F(int, int);
int main()
{
    int num1, num2, res;
    printf("\n F (M, N) = 1 si M = 0 o M>=N>=1 ");
    printf("\n F (M, N) = F (M - 1, N) + F (M - 1, N - 1), ");
    printf("\n Ingrese el valor de M: ");
    scanf("%d", &num1);
    printf("\n Ingrese el valor de N: ");
    scanf("%d", &num2);
    res = F(num1, num2);
    printf("\n F( %d , %d ) = %d", num1, num2, res);
    return 0;
}
int F(int M, int N)
{
    if(M==0||M>=N>=1)
        return 1;
    else
        return (F(M-1, N)+F(M-1,N-1));
}


