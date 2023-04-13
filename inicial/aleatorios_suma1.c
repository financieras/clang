/*
Generar números aleatorios hasta que el acumulado llegue a 100 o más
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));   // semilla
    int n, suma = 0;
    while (suma<100){
        n = rand() % 10 + 1;   // aleatorios entre 1 y 10
        suma += n;
        printf("%d %d\n", n, suma);
    }
}
