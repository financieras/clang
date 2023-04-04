/*
https://youtu.be/Evi1YEKif1U
*/

#include <stdio.h>

void suma(int, int);            // prototype de la función
                                // también podríamos haber puesto void suma(int a, int b);

void main(){
    suma(2, 3);                 // invoca la función
}

void suma(int n1, int n2){      
    printf("%d + %d = %d\n", n1, n2, n1+n2);
}

/*
clear && gcc procedimiento1.c && ./a.out
*/