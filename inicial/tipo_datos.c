/*
Tipo de datos y constantes
https://www.youtube.com/watch?v=bad2ma5pH7g&list=PL-Mlm_HYjCo9uJiwuhdM8ZzrUXVYk-e3X&index=3&ab_channel=C%C3%B3digosdeProgramaci%C3%B3n-MR
*/

#include <stdio.h>
#define PI 3.1415169   // constnae

int main()
{
    int numero = 5;
    float numero_decimal = 15.657;
    char letra = 'M';   // comillas simples
    char cadena[20] = "Hola mund0 mundial";   // comillas dobles
    int radio = 10;

    printf("Número es: %d\n", numero);
    printf("Número decimal es: %f\n", numero_decimal);
    printf("Letra es: %c\n", letra);
    printf("Cadena es: %s\n", cadena);
    printf("Perímetro: %.2f metros\n", 2* PI * radio);   // redondeando a dos decimales
    
    return 0;
}
