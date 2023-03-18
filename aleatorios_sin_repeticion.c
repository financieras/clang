/*
    Generación de un array de enteros aleatorios sin repetición
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5   // TAMAÑO: número de elementos del array, definido como una constante

int exist(int r, int arr[]);       // prototipo de función

int main()
{
    srand(time(NULL));   // semilla
    int arr[TAM];
    int r;

    printf("Aleatorios con posible repetición: ");
    for(int i=0; i<TAM; i++)
    {
        do
        {
            r = rand() % 10 + 1;
            printf("%i ", r);
        } while (exist(r, arr));
        
        arr[i] = r;
    }
    printf("\nSin repetición: ");

    for(int i=0; i<TAM; i++){
         printf("%i ", arr[i]);
    }
    printf("\n");
    return 0;
}


/*
    Función que detecta si el aleatorio está repetido.
    Si el aleatorio r ya existe en el array retorna 1
    y en caso contrario retorna 0
*/
int exist(int r, int arr[TAM])
{
    for(int i=0; i<TAM; i++)
    {
        if(r==arr[i]) return 1;
    }
    return 0;
}