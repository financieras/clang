/*
Punteros: Llamada a funciones
https://youtu.be/1S9cv6LNF9M
*/

#include <stdio.h>

int cubo(int n);   // prototipo de la función

int main()
{
    int num = 5;
    printf("El valor original es: %i\n", num);
    int resultado = cubo(num);   // llamada por valor
    printf("El resultado es: %i\n", resultado);
   return 0;
}

int cubo(int n)
{
    return n * n * n;
}