/*
https://youtu.be/3NaYA4dF8IM
*/

#include <stdio.h>

int suma(int a, int b);         // prototype de la función
double promedio(int, int);      // prototype de la función. También funciona sin poner los parámetros de la función.

int main(){
    int n1=4, n2=8;

    int sum = suma(n1, n2);                                      // invoca la función
    printf("%d + %d = %d\n", n1, n2, sum);

    double prom = promedio(n1, n2);
    printf("El promedio de %i y %i es %.2f\n", n1, n2, prom);     // invoca la función

    if (prom<5){
        printf("El promedio es menor que 5\n");
    }else if (prom==5){
        printf("El promedio es igual a 5\n");
    }else{
        printf("El promedio es mayor que 5\n");
    }
    return 0;
}

int suma(int n1, int n2){      
    return n1+n2;
}

double promedio(int n1, int n2){        // también se podría poner double promedio(double n1, double n2)
    return (n1+n2)/2.0;                 // dividir por 2.0 para que de double
                                        // también se podría poner return (double) (n1+n2)/2;
}

/*
clear && gcc procedimiento4.c && ./a.out
*/