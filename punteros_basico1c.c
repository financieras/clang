/*
https://youtu.be/QV_6_aKH9G8
*/

#include <stdio.h>

void doblar_valor(int n){
    n *= 2;                // dobla el valor de la variable
    printf("%d Dentro de la función doblar\n", n);
}

void doblar_referencia(int* m){
    *m *= 2;                // dobla el valor del puntero
    printf("%d Dentro de la función doblar\n", *m);
}


int main(){
    printf("Sin punteros: Los parámetros se pasan por valor");
    int x = 10;
    printf("%d Variable x declarada\n", x);
    doblar_valor(x);
    printf("%d En el main después de invocar la función doblar\n\n", x);

    printf(Con punteros: Se simula un paso por referencia);
    int y = 3;
    printf("%d Variable y declarada\n", y);
    doblar_referencia(&y);
    printf("%d En el main después de invocar la función doblar\n\n", y);

    return 0;
}