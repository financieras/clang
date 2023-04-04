/*
https://youtu.be/-cXbrwUAULM
*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int res=1, n=0;

    while (res==1){
        n = rand()%11;   // aleatorios entre 0 y 10
        printf("El número generado es: %d\n", n);
        printf("¿Desea generar otro número? (1: Si   2: No): ");
        scanf("%d", &res);
    }
    printf("Fin del programa\n");
}

// clear && gcc while_rnd.c && ./a.out