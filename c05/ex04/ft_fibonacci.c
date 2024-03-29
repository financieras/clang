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
    int resultado = 0;
    resultado = ft_fibonacci(index);
    if (resultado == -1) {
        printf("El índice debe ser mayor o igual a 0.\n");
    } else {
        printf("El elemento de index %d en la sucesión de Fibonacci es %d\n", index, resultado);
    }
    return 0;
}

int ft_fibonacci(int index){
    if (index < 0)
        return -1;
    else if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else{
        return ft_fibonacci(index-1) + ft_fibonacci(index-2);
    }
}


// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765