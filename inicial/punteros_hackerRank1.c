#include <stdio.h>

void increment(int*);

int main() {
    int a;
    printf("Escribe un entero: ");
    scanf("%d", &a);
    printf("Has escrito un %d\n", a);
    increment(&a);
    printf("La función 'increment' altera su valor a: %d\n", a);
    return 0;      
}

void increment(int *v) {        // función que no retorna nada
    (*v)+;                      // los paréntesis son importantes 
}

