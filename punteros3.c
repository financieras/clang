/*
Punteros: Llamada a funciones por referencia
https://youtu.be/1S9cv6LNF9M
*/

#include <stdio.h>

void cubo(int *n);   // prototipo de la función, es void pq cubo no retorna nada

int main()
{
    int num = 5;
    printf("El valor original es: %i\n", num);
    cubo(&num);   // llamada por referencia
    printf("El resultado es: %i\n", num);
   return 0;
}

void cubo(int *n)   // es void pq cubo no retorna nada
{
    *n = *n * *n * *n;
}