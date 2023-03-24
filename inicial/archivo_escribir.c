/*
Abrir o crear si no existe, escribir y cerrar un archivo txt
https://youtu.be/GzTKdLiUxLs
*/

#include <stdio.h>

int main(){
    FILE *fp;
    char caracter;
    fp = fopen("archivo.txt", "a+t");
    printf("Introduzca un texto al archivo:\n");
    while((caracter = getchar()) != '\n'){
        printf("%c", fputc(caracter, fp));
    }
    fclose(fp);
}