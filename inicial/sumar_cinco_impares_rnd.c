/*
Generar números aleatorios enteros hasta llegar a generar 5 impares y dar su suma.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));      // semilla
    int suma = 0;
    int rnd;
    int contador = 0;

    do{
        rnd = rand() % 10 + 1;
        printf("%i ", rnd);
        if (rnd%2){
            suma += rnd;
            contador ++;
        }
    }while(contador<5);

    printf("\nLa suma de los impares es: %d\n", suma);

}

/*
Para ejecutar el código usamos:
clear && gcc sumar_cinco_impares_rnd.c && ./a.out
*/