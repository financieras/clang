#include <stdio.h>
#include <math.h>

int main(){
    double num1 = -3.1785;
    int num2 = 6;
    double PI = 3.14159;

    printf("El valor absoluto de num1 es %g y el de num2 es %g\n", fabs(num1), fabs(num2));
    printf("La raiz cuadrada de PI es: %g\n", sqrt(PI));
    printf("Elevando %g a %i obtenemos %g\n", num1, num2, pow(num1, num2));
    printf("El coseno de PI es %g\n", cos(PI));
    printf("El redondeo con ceil de PI es %g\n", ceil(PI));   // redondeo hacia arriba


    
    printf("%g\n", .1+.1+.1);
    return 0;
}

/*
Al usar la librería math debemos añadir -lm al compilar, así:
gcc math.c -lm && ./a.out
*/