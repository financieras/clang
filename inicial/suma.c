/* Vamos a sumar dos números */

#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    printf("Ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor\n");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("El resultado es: %d\n", resultado);
    return 0;
}