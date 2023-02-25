#include <stdio.h>

void mensaje(char nombre[10]);

int main(){
    char minombre[10] = "Marco";
    mensaje(minombre);
    return 0;
}

void mensaje(char nombre[10]){
    printf("Hola %s\n", nombre);
    return;      // se puede eliminar este retur y también funciona porque la función es void
}