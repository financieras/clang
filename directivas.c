/*
    Directivas del Preprocesador
*/
#include <stdio.h>
//#include "nombre del archivo"
#define PI 3.14159      // esta directiva guarda un constante
#define CUBO(a) a*a*a   // las directivas son más rápidas que las funciones
int main()
{
    int radio;
    radio = 2;
    double perimetro;
    perimetro = 2*PI*radio;
    printf("%f\n", perimetro);

    int a = 3;
    printf("El cubo de %d es %i\n", a, CUBO(a));
    return 0;
}
