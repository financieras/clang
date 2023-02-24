/*
Generación de un array de enteros aleatorios sin repetición
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5   // número de elementos del array

int yaexiste(int r, int arr[], int n);       // prototipo de función

int main()
{
    srand(time(NULL));   // semilla
    int arr[N];
    int r;

    for(int i=0; i<N; i++)
    {
        do
        {
            r = rand() % 10;
            printf("%i ", r);
        } while (yaexiste(r, arr, N));
        
        arr[i] = r;
    }
    printf("\n\n");

    for(int i=0; i<N; i++)
    {
        printf("%i\n", arr[i]);
    }
}

int yaexiste(int r, int arr[N], int N)
{
    for(int i=0; i<N; i++)
    {
        if(r==arr[i])
        {
            return 0;
        }
        return 1;
    }
}