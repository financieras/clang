/*
https://youtu.be/Zh5F5cgoAGI
*/

#include <stdio.h>
void cambiar(int *);

int main(){
    int a = 20;
    //int *pa = &a;

    printf("Valor original: %d\n", a);

    cambiar(&a);

    printf("Valor modificado: %d\n", a);

    return 0;    
}

void cambiar(int * pb){
    * pb = 100;  // ponemos* para acceder al valor que está en la mamoeria
}



/*
clear && gcc punteros_d2.c && ./a.out
*/