/* Condicional if
Operadores de igualdad:
    == es igual
    != es distinto
Operadores de relación:
    < menor que
    > mayor que
    <= menor o igual que
    >= mayor o igula que */

#include <stdio.h>

int main()
{
    int edad;
    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    if (edad >= 18)
    {
        printf("Usted es mayor de edad\n");
    }
    else if (edad == 17)
    {
        printf("Ya falta poco para llegar a ser mayor de edad\n");
    }
    else
    {
        printf("Usted es menor de edad\n");
    }
    return 0;
}