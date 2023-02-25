/*
Generación de un array de enteros aleatorios sin repetición
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5   // número de elementos del array, definido como una constante

int exist(int r, int arr[]);       // prototipo de función

int main(){
    srand(time(NULL));   // semilla
    int arr[TAM];
    int r;

    for(int i=0; i<TAM; i++){
        do{
            r = rand() % 10 + 1;
            printf("%i ", r);
        } while (exist(r, arr));
        
        arr[i] = r;
    }
    printf("\n\n");

    for(int i=0; i<TAM; i++){
         printf("%i\n", arr[i]);
    }
}


int exist(int r, int arr[TAM]){   // si el aleatorio r ya existe en el array retorna 0 y en caso contrario retorna 0
    for(int i=0; i<TAM; i++){
        if(r==arr[i]){
            return 1;
        }
    }
    return 0;
}