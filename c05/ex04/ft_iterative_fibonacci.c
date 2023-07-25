/*
Escribe una función ft_fibonacci que devuelva el n-ésimo elemento de la sucesión de Fibonacci
El primer elemento de la serie está en el índice 0.
Consideramos que la sucesión de Fibonacci comienza por 0,1,1,2
No se tendrán que gestionar los overflows.
El prototipo de la función deberá ser el siguiente:
int ft_fibonacci(int index);
Si el índice es inferior a 0, la función retornará -1.
*/

#include <stdio.h>

int ft_iterative_fibonacci(int index);

int main(){
    int index = 20;
    int resultado = 0;
    resultado = ft_iterative_fibonacci(index);
    printf("El elemento de index %d en la sucesión de Fibonacci es %d\n", index, resultado);
    return 0;
}

int ft_iterative_fibonacci(int index){
    if (index < 0)
        return -1;
    else if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else{
        int a = 0;
        int b = 1;
        int cont = 1;
        while (cont < index){
            int aux = b;
            b = a + b;
            a = aux;
            cont++;
        }
        return b;
    }
}

//clear && gcc ft_iterative_fibonacci.c && ./a.out