#include <stdio.h>

int doblar_por_referencia(int *x);

int main(){
    printf("Con punteros: se simulan un paso por referencia.\n");
    int x = 10;
    printf("\t%d Variable x declarada\n", x);
    doblar_por_referencia(&x);
    printf("\t%d En el main después de invocar la función doblar\n", x);

    return 0;
}

int doblar_por_referencia(int *x){
    *x *= 2;
    printf("\t%d Dentro de la función doblar\n", *x);
}