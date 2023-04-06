/*
https://youtu.be/Zh5F5cgoAGI
*/

#include <stdio.h>

int main(){
    // declaramos una variable normal de tipo int
    int a = 20;

    // declaramos un puntero a una variable de tipo int
    int *pa = &a;   // pa almacena una dirección de memoria

    printf("*pa = %p\n", pa);   // poniendo %p podemos impriir la dirección de memoria

    // imprimimos la variable a
    printf("a = %d\n", a);

    // imprimimos la variable b
    printf("pa = %d\n", *pa);

    return 0;    
}

/*
clear && gcc punteros_d1.c && ./a.out
*/