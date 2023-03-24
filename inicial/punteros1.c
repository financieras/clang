/*
Punteros  (apuntadores)
https://youtu.be/hSWM_dX7rrU
*/

#include <stdio.h>

int main()
{
    int x = 2;
    int *apt = &x;
    printf("La variable x es: %i\n", x);
    printf("La el puntero hacia x vale: %i\n", *apt);
    printf("La dirección de memoria hexadecimal es: %p\n", apt);
   return 0;
}