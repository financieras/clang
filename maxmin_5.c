/*
    Cálculo del máximo y el mínimo de un array
    usando solo la función manin
    usando punteros
*/

#include<stdio.h>

int main(void){
    int i, arr[5] = {3,4,2,9,7};
    int min = arr[0];
    int max = arr[0];
    int *p;   // puntero del array
    p = arr;

    for(i=0; i<3; i++){
      if(max <= *p)      // condition changed
        max = *p;
      if(min >= *p)      // here also
        min = *p;
        p++;
    }

    printf("Máximo: %d\n", max);
    printf("Mínimo: %d\n", min);
    return 0;
}