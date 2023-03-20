#include <stdio.h>

int doblar_por_valor(int x);

int main(){
    printf("Sin punteros: los parámetros se pasan por valor\n");
    int x = 10;
    printf("\t%d Variable x declarada\n", x);
    doblar_por_valor(x);
    printf("\t%d En el main después de invocar la función doblar\n", x);

    return 0;
}

int doblar_por_valor(int x){
    x *= 2;
    printf("\t%d Dentro de la función doblar\n", x);
}