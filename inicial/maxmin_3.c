/*  Cálculo del máximo y el mínimo
    Usando una función auxiliar llamada busca_maxmin sin return
    solo un asterisco en la línea 21, al calcular el tamaño del array
    se imprime el máximo y el mínimo desde la función auxiliar 
    calculando la longitud del array */

#include <stdio.h>

void busca_maxmin(int a[5]);

int main(){
    int a[5] = {3,4,2,9,7};
    busca_maxmin(a);     // invocamos la función
    return 0;
}

void busca_maxmin(int a[]){
    size_t n = sizeof(*a);
    int min, max;
    min = max = a[0];
    for (int i=0; i < 5; i++){
        if (a[i]>max) max=a[i];
        else if (a[i]<min) min=a[i];
    }
    printf("\nMáximo: %d, mínimo; %d\n", max, min);
}