#include <stdio.h>

int impar(int x);

int main(){
    int arr[6] = {1,2,3,4,5,6};


    // METODO 1: sin usar la función de verificación impar
    for(int i=0; i<6; i++){
        if(arr[i]%2){
            printf("%i ", arr[i]);      // imprime solo los impares
        }
    }


    // COMPROBACIÓN DE UN SOLO NÚMERO    
    printf("\nVeamos si 5 es impar: %i\n", impar(5));   // la función retorna 1 que equivale a True


    // METODO 2: usando la función de verificación impar

    for(int i=0; i<6; i++){
        if(impar(arr[i])){
            printf("%i ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

int impar(int x){
    if(x%2){
        return 1;   // si x es impar retorna 1. Todo nº distinto de 0 equivale a True
    }
    return 0;   // si x es par retorna 0 que equivale a False
}
