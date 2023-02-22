/*
Generación de números aleatorios almacenamiento en un array y su acumulación
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>   // para usar los aleatorios con rand
long int random(void);

void srandom(unsigned int seed);

srand(time(NULL));   // Initialization, should only be called once.

int main()
{
    int suma=0;
    int arr[10];
    for(int i=0; i<10; i++)
    {
        int r = srand() % 20;
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