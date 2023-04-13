/*
https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
Crear un array de forma dinámica usando malloc y free
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));   // semilla
    int n, suma = 0;
    n = rand() % 8 + 3;   // aleatorios entre 3 y 9. Es el número de elementos que tendrá el array y que tendremos que sumar
    printf("n = %d\n=====\n", n);
    int *arr = (int*)malloc(n*sizeof(int));

    for (int i=0; i<n; i++){
        arr[i] = rand() % 10;  // aleatorios entre 0 y 9
        suma += arr[i];
        printf("%d %d\n", arr[i], suma);
    }

    free(arr);
}