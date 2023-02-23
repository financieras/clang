/*
Funciones básicas
https://youtu.be/-zNyti2wZ0s
*/

#include <stdio.h>   // directiva include

int suma();   // IMPORTANTE: declaramos la función suma al inicio antes de la función main para que cuando main la use ya enté en memoria

int main()
{
    printf("%i\n", suma());   // invocamos la función suma
    return 0;
}

int suma()
{
    int num1 = 5;
    int num2 = 12;
    int s = num1 + num2;
    return s;    // retornamos la variable local s
}
