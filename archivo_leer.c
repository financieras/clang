/*
Abrir, leer y cerrar un archivo txt
https://youtu.be/GzTKdLiUxLs
*/

#include <stdio.h>

int main(){
    FILE *fp;
    int caracter;
    fp = fopen("archivo.txt", "r");

    if(fp == NULL){
        printf("Error al abrir el archivo\n");
    } else {
        while((caracter = getc(fp)) != EOF){
            printf("%c", caracter);
        }
    }
    fclose(fp);
}