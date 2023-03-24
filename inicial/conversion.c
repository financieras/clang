/*
Conversión de tipos de datos
https://www.youtube.com/watch?v=RI0zoFnolIY&list=PLpOqH6AE0tNgqknxjMAJ8bX_L1a7lnBaH&index=9&ab_channel=codigofacilito
*/

#include <stdio.h>

int main()
{
    int a = 42;
    float b =10.7;
    float suma = (float)a + b;
    printf("entero: %i\nflotante: %.2f\ndouble: %.3f\ncaracter: %c\n", a, (float)a, (double)a, (char)a);
    printf("%.2f\n", suma);
    return 0;
}