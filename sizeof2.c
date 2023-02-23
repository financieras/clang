/*
Operador SizeOf
https://youtu.be/eCmp_OeanzY
*/

#include <stdio.h>

size_t getsize(float *ptr);

int main()
{
    float arr[20];
    printf("El número de bytes en el array es: %lu\n", sizeof(arr));
    printf("El número de bytes devueltos por getsize es: %lu\n", getsize(arr));
    return 0;
}

size_t getsize(float *ptr)
{
    return sizeof(ptr);
}