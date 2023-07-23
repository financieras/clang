// Escribe una función iterativa que devuelva un número.
// Este númeo será el resutado de la operación factorial a partir
// del númeo usado como parámetro.
// Si el argumento no es válido, la función debe devolver 0.
// No hay que gestionar los "int overflow", el retorno de la función será idefinido.
// El propotipo de la función deberá ser el siguiente:
// int ft_iterative_factorial(int nb);

#include <stdio.h>

int ft_iterative_factorial(int nb) {
    if (nb < 0) {
        return 0;
    }

    int fact = 1;

    for (int i = 1; i <= nb; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num = 5;
    int result = ft_iterative_factorial(num);
    printf("El factorial de %d es: %d\n", num, result);

    return 0;
}


// clear && gcc ft_iterative_factorial.c && ./a.out