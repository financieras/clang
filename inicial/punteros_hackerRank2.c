#include <stdio.h>

void update(int *a, int *b) {
    int suma = *a + *b;         // es necesario crear una variable auxiliar, ya que si se cambia el valor de *a ya no se dispone del valor originalmente recibido por la función

    if (*a >= *b){
        *b = *a - *b;
    } else {
        *b = *b - *a;
    }

    *a = suma;                  // esta línea debe ir al final, después de haber trabajado con a y con b. Por eso se necesita la variable auxiliar 'suma'
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Introducir dos números enteros separados por un espacio: \n");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("Suma: %d\nDiferencia absoluta: %d\n", a, b);

    return 0;
}

/*  // esta función está muy bien y tb usa una variable auxiliar
void update(int *a,int *b) {
    int aux = *a;
    *a = aux + *b;
    *b = abs(aux - *b);
}
*/