/*
Entrada y salida de datos.
https://youtu.be/N_mNvTPH12o
*/

#include <stdio.h>

int main(void){
    char producto[15];
    int existencias;
    float costo;
    float total;

    printf("Indique el producto: ");
    scanf("%s", producto);                        // no va con & ya que producto es un array de 15 posiciones
    printf("Indique el nº de existencias: ");
    scanf("%i", &existencias);                   // va con &
    printf("Indique el costo unitario: ");
    scanf("%f", &costo);                         // va con &

    total = existencias * costo;

    printf("\nEl producto %s tiene %d unidades y su coste unitario es de %.2f €\n", producto, existencias, costo);
    printf("El total coste es: %.2f €\n", total);
}