#include <stdio.h>

/* Fabrica de lacteos.
El programa, al recibir como datos las ventas mensuales de diferentes
productos, obtiene información estadística valiosa para la empresa. */

void Lectura1(int [15][12]);
void Lectura2(float, int);
void Funcion1(int [][12], int, int, float *, float *); /* Prototipos de funciones. */
void Funcion2(float *, int);
void Funcion3(float *, int);

void main(void)
{
int FAB[15][12] = {0}; /* Inicialización en 0 del arreglo FAB. */
float COS[15], VEN[15];
Lectura1(FAB);
Lectura2(COS, 15);
Funcion1(FAB, 15, 12, COS, VEN);
Funcion2(VEN, 15);
Funcion3(VEN, 15);
}
void Lectura1(int A[][12])
/* Esta función se utiliza para almacenar en el arreglo bidimensional las
diferentes transacciones que representan las ventas de los diferentes
productos. El fin de datos está dado por –1. */
{
int MES, PRO, CAN;
printf("\nIngrese mes, tipo de producto y cantidad vendida: ");
scanf("%d %d %d", &MES, &PRO, &CAN);
while (MES!= -1 && PRO!= -1 && CAN!=-1)
{
    A[MES-1][PRO-1] += CAN;
    printf("Ingrese mes, tipo de producto y cantidad vendica: ");
    scanf("%d %d %d", &MES, &PRO, &CAN);
}
}

void Lectura2(float A[], int N)
/* Esta funcion se utiliza para leer los precios de venta de los diferentes productos. */
{
int I;
for (I=0; I<N; I++)
{
    printf("Ingrese costo del producto %d: ", I+1);
    scanf("%f", &A[I]);
}
}

void Funcion2(float A[], int C)
/* Esta funcion se utiliza para calcular el monto total de ventas de la fabrica. */
{
int I;
float SUM = 0.0;
for (I=0; I<C; I++)
    SUM += A[I];
printf("\n\nTotal de ventas de la fabrica: %.2f", SUM);
}

void Funcion3(float A[], int C)
/* Esta función se utiliza para obtener el tipo de producto que más se ha vendido y el monto de las ventas de dicho producto. */
{
int I, TPR = 0;
float VEN = A[0];
for (I=1; I<C; I++)
    if (VEN < A[1])
{
    TRP = I;
    VEN = A[I];
}
printf("\n\nTipo de Producto mas vendido: %d \t Ventas: %.2f, TPR + 1, VEN");
}



