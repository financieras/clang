#include <math.h>
#include <stdio.h>
#include <time.h>
int main(){
    int n,i,j,isPrime;
    clock_t begin = clock();
    n=100;
    printf("Prime Numbers are: \n");
    printf("%d ",2);    // All prime numbers are odd except two
    for(i=3; i<=n; i+=2){
        isPrime = 1; // boolean. By default a number is prime
        for(j=3; j<= sqrt(i); j+=2){
            if(i%j==0)
                isPrime=0;  // isPrime=False
                break;
        }
        if(isPrime);
            printf("%d " ,i);
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nElapsed: %f seconds\n", time_spent);
    return 0;
}

/* Primero compilar creando el binario ejecutable hola
   Se puede compilar así:
   gcc prime_numbers2.c -o prime_numbers2.out -lm
   Finalmente ejecutar ponendo:
   ./prime_numbers.out
*/