/*
Escribe una función ft_fibonacci que devuelva el n-ésimo elemento de la sucesión de Fibonacci
El primer elemento de la serie está en el índice 0.
Consideramos que la sucesión de Fibonacci comienza por 0,1,1,2
No se tendrán que gestionar los overflows.
El prototipo de la función deberá ser el siguiente:
int ft_fibonacci(int index);
Por supuesto ft_fibonacci tendrá que ser recursiva.
Si el índice es inferior a 0, la función retornará -1.
*/

#include <stdio.h>

int ft_fibonacci(int index);

int main(){
    int index = 20;
    resultado = ft_fibonacci(index);
    printf("El elemento de index %d en la sucesión de Fibonacci es &d\n", index, resultado);
    return 0;
}
