/*  Cálculo del máximo y el mínimo
    Usando una función auxiliar llamada busca_maxmin sin return
    usando punteros
    se imprime el máximo y el mínimo en el main  
    al no retornanse nada en la función auxiliar e imprimirse el resultado en main
    se han de usar punteros para max y min que simulan un paso por referencia */

#include <stdio.h>

void busca_maxmin(int*, int, int);

int main(){
    int a[] = {3,4,2,9,7};
    
    //int *min, *max;
    busca_maxmin(int a, int max, int min);
    //printf("\nMáximo: %d, mínimo; %d\n", *max, *min);
    return 0;
}

void busca_maxmin(int *arr, int max, int min){
    size_t n = sizeof(*a);
    printf("%d", n)
    
    // *min = *max = a[0];
    // for (int i=0; i < 5; i++){
    //     if (a[i]>*max) *max=a[i];
    //     else if (a[i]<*min) *min=a[i];
    // }
}