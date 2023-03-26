/*  Cálculo del máximo y el mínimo
    Usando una función auxiliar llamada busca_maxmin sin return
    sin usar punteros
    se imprime el máximo y el mínimo desde la función auxiliar */

#include <stdio.h>
#include <stdlib.h>

void busca_maxmin(int a[5], int n);

int main(){
    int a[5] = {3,4,2,9,7};
    int n = 5;
    //system("clear");
    busca_maxmin(a, n);     // invocamos la función
    return 0;
}

void busca_maxmin(int a[], int n){
    int min, max;
    min = max = a[0];
    for (int i=1; i<n; i++){
        if (a[i]>max) max=a[i];
        else if (a[i]<min) min=a[i];
    }
    printf("\nMáximo: %d, mínimo; %d\n", max, min);
}