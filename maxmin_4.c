/*  Cálculo del máximo y el mínimo
    Usando dos funciones, una para el max y otra para el min
    usando punteros    
    se imprime el máximo y el mínimo en el main  */

#include <stdio.h>

int max(int*, int);
int min(int*, int);

int main(){
    int a[] = {3,4,2,9,7};
    int n = sizeof(a) / sizeof(a[0]);

    int min_value = min(a, n);
    int max_value = max(a, n);

    printf("\nMáximo: %d, Mínimo: %d\n", max_value, min_value);
    return 0;
}

int min(int* arr, int n){
    int result = arr[0];
    for (int i=0; i<n; i++) if (*(arr+i) < result) result = *(arr+i);
    return result;
}

int max(int *arr, int n){
    int result = arr[0];
    for (int i=0; i<n; i++) if (arr[i] > result) result = arr[i];
    return result;
}

/*
    a[i] is equivalent to *(a+i)
*/