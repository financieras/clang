/*
https://youtu.be/3NaYA4dF8IM
*/

#include <stdio.h>

void suma(int a, int b);        // prototype de la función

int main(){
    suma(2, 3);                 // invoca la función
    return 0;
}

void suma(int n1, int n2){      
    printf("%d + %d = %d\n", n1, n2, n1+n2);
}

/*
clear && gcc procedimiento2.c && ./a.out
*/