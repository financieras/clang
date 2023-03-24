/*
https://youtu.be/QV_6_aKH9G8
*/

#include <stdio.h>

void doblar_valor(int n);
void doblar_referencia(int* m);


int main(){
    printf("Sin punteros: Los parámetros se pasan por valor.\n");
    int x = 10;
    printf("\t%d Variable x declarada\n", x);
    doblar_valor(x);
    printf("\t%d En el main después de invocar la función doblar\n\n", x);

    printf("Con punteros: Se simula un paso por referencia.\n");
    int y = 3;
    printf("\t%d Variable y declarada\n", y);
    doblar_referencia(&y);
    printf("\t%d En el main después de invocar la función doblar\n\n", y);

    return 0;
}

void doblar_valor(int n){
    n *= 2;                // dobla el valor de la variable
    printf("\t%d Dentro de la función doblar\n", n);
}

void doblar_referencia(int* m){
    *m *= 2;                // dobla el valor del puntero
    printf("\t%d Dentro de la función doblar\n", *m);
}