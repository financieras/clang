/*
Generación de números aleatorios almacenamiento en un array y su acumulación
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>   // para usar los aleatorios con rand

int main()
{
    srand(time(NULL));   // Initialization, should only be called once
    int suma=0;
    int arr[10];
    for(int i=0; i<10; i++)
    {
        int r = rand() % 10 + 1;   // enteros entre 1 y 10
        arr[i] = r;
    }


    for(int i=0; i<10; i++)
    {
        printf("%i\n", arr[i]);
        suma += arr[i];
    }
    printf("Acumulado: %i\n", suma);

    return 0;
}