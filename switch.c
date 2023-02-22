/*
Selección de casos con Switch
https://youtu.be/pyg2OPqsGqU
*/

#include <stdio.h>

int main()
{
    int casos;
    printf("Ingrese un número: ");
    scanf("%i", &casos);
    switch(casos)
    {
        case 1:
            printf("Estamos en el primer caso\n");
            break;
        case 2:
            printf("Estamos en el segundo caso\n");
            break;
        case 3:
            printf("Estamos en el tercer caso\n");
            break;
        case 4:
            printf("Estamos en el cuarto caso\n");
            break;
        case 5:
            printf("Estamos en el quinto caso\n");
            break;
        default:
            printf("Caso no encontrado\n");
            break;
    }
    return 0;
}