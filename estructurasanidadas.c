/*
Estructuras anidadas
https://youtu.be/E84KCj-996o
*/

#include <stdio.h>
#define length 2      // definimos una constante

struct owner
{
    char nombre[20];
    char direccion[30];
};

struct dog
{
    char nombre[15];
    int edadMeses;
    struct owner ownerDog;      // creamos la variable ownerDog que nos permite comunicar los dos structs
}dogs[length];

int main()
{
    for(int i=0; i<length; i++)
    {
        printf("\nNombre del perro: ");
        scanf("%s", dogs[i].nombre);
        printf("Edad del perro en meses: ");
        scanf("%i", &dogs[i].edadMeses);
        printf("Nombre del dueño: ");
        scanf("%s", dogs[i].ownerDog.nombre);
        printf("Dirección: ");
        scanf("%s", dogs[i].ownerDog.direccion);
    }

    for(int i=0; i<length; i++)
    {
        printf("\nEl nombre del perro %i es %s.\n", i+1, dogs[i].nombre);
        printf("La edad del perro %i es: %i meses.\n", i+1, dogs[i].edadMeses);
        printf("El nombre del dueño es: %s.\n", dogs[i].ownerDog.nombre);
        printf("La dirección es: %s.\n", dogs[i].ownerDog.direccion);
    }

    return 0;
}