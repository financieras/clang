/*
Una estructura es un conjunto de miembros
Los miembros pueden tener tipos de datos diferentes
https://youtu.be/6eEYpo0CIRY
*/

#include <stdio.h>

struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}perro1={"Boby", 10, 3.5},
perro2={"Laika", 3, 2.475};

int main()
{
    printf("El nombre de la mascota es %s\n", perro1.nombre);
    printf("El peso de %s es de %.2f Kg. y tiene %i meses.\n", perro2.nombre, perro2.peso, perro2.edadMeses);
    return 0;
}