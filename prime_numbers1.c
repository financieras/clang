#include <stdio.h>
#include <time.h>
int main(){
    int n,i,fact,j;
    clock_t begin = clock();
    n=100000;
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2);
            printf("%d " ,i);
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Elapsed: %f seconds\n", time_spent);
    return 0;
}

/* Primero compilar creando el binario ejecutable hola
   Se puede compilar así gcc prime_numbers.c -o prime_numbers.out
   Finalmente ejecutar ponendo ./prime_numbers.out
*/