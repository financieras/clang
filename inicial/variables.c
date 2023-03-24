/*
   Variables
   https://www.youtube.com/watch?v=hVQn03Kw5Z0&list=PLpOqH6AE0tNgqknxjMAJ8bX_L1a7lnBaH&index=8
*/
#include <stdio.h>
#include <math.h>

int main()
{
    char C = 'y';    //tamaño de 1 byte va entre 0...255
    int a = 20;      //tamaño de 2 bytes va de -32768...32767
    short e = -1;    // 2 bytes, va de -128...127
    unsigned u = 25; // 2 bytes, 0...65535
    long l = pow(2,32)/2-1; //4 bytes, -2147483648...2147483647
    float f = 72.534;
    double d = 12323.877658; // 8 bytes
    printf("%c\n", C);
    printf("%i\n", a);
    printf("%i\n", e);
    printf("%i\n", u);
    printf("%li\n", l);
    printf("%f\n", f);
    printf("%.2f\n", f);   // redondeando a 2 decimales
    printf("%f\n", d);     // usando f de float
    printf("%lf\n", d);    // usnado lf de long float
    printf("%.2lf\n", d);  // redondeando a 2 decimales
    return 0;
}

/*
En printf podemos usar estos tipos:
Entero: %d o %i
Flotante: %f
Caracter una Letra: %c
Caracteres (palabra): %s 
*/