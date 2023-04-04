/*
https://youtu.be/3NaYA4dF8IM
*/

#include <stdio.h>

int suma(int a, int b);         // prototype de la función

int main(){
    suma(2, 3);                 // invoca la función
    return 0;
}

int suma(int n1, int n2){      
    printf("%d + %d = %d\n", n1, n2, n1+n2);
    return 0;
}

/*
clear && gcc procedimiento3.c && ./a.out
*/