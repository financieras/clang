#include <stdio.h>

int main() {
    
    // Preguntamos al usuario cuántos términos quiere
    int n;
    printf("¿Cuántos términos?: ");
    scanf("%d", &n);

    int arr[n];   // creamos un array de n términos

    // Inicializamos los dos primeros términos
    arr[0] = 0;
    arr[1] = 1;

    // Algoritmo de Fibonacci sobre un array
    for(int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2]; 
    }

    // Imprimimos los términos de la serie de Fibonacci
    for( int i = 0; i < n; i++ ) {
        printf("%d\n", arr[i]);
    }
}