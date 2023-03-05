/*
https://youtu.be/QV_6_aKH9G8
*/

#include <stdio.h>

int main()
{
    int x = 10;
    int* dirX = &x;

    float y = 0.5;
    float* dirY = &y;

    printf("x: %d\n", x);
    printf("Dirección de x: %p\n\n", dirX);

    printf("y: %f\n", y);
    printf("Dirección de y: %p\n\n", dirY);
}