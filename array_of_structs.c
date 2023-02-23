/* 
Array of Structs in C
Array de estructuras en C
https://www.youtube.com/watch?v=y6_v8rlE1e8&list=PLpOqH6AE0tNgqknxjMAJ8bX_L1a7lnBaH&index=24&t=22s&ab_channel=codigofacilito
*/

 #include <stdio.h>

 struct perro
 {
    char nombre[30];
    int edadMeses;
    float peso;
 }perros[2];

 int main()
 {
    for(int i=0; i<2; i++)
    {
        printf("\nIngrese el nombre del perro %i: ", i+1);
        scanf("%s", perros[i].nombre);                            // en este caso el array perros no lleva & porque el nombre ya es un array de chars y los array van con puntero
        printf("Ingrese la edad en meses del perro %i: ", i+1);
        scanf("%i", &perros[i].edadMeses);                        // el array perros lleva & para hacer referencia al puntero
        printf("Ingrese el peso en Kg. del perro %i: ", i+1);
        scanf("%f", &perros[i].peso);                             // el array perros lleva & para hacer referencia al puntero
    }

    for(int i=0; i<2; i++)
    {
        printf("\nEl nombre del perro %i es %s.\n", i+1, perros[i].nombre);
        printf("La edad del perro %i es %i meses.\n", i+1, perros[i].edadMeses);
        printf("El peso del perro %i es %.2f Kg.\n", i+1, perros[i].peso);
    }

    return 0;
 }

 /*
En el primer scanf perros va sin &:
No se pone el '&' porque un arreglo en realidad es un puntero que apunta a la posicion del primer elemento del arreglo.
Como el scanf es una funcion con un parametro por referencia, dicha funcion espera que se reciba un puntero, por eso se pone el '&' al invocar a la funcion, 
para que se pase la direccion de memoria, pero en el caso de los arreglos, ya son un puntero.

Una variable tipo string (que en C se declara como un arreglo de chars), es realmente un puntero. 
Y como la función "scanf" espera como parámetro un puntero (una variable que almacena una dirección de memoria), 
pones directamente la variable del String y listo. 
Si hicieras &variable_string, estarías obteniendo la dirección de memoria en la que está el puntero que apunta al string, y no es lo que buscas modificar. 
 */