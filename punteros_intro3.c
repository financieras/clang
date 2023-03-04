/*
Simulación de paso de parámetros por referencia
https://youtu.be/4IabpaIObzM
*/

#include <stdio.h>

//void max_min(int a[], int n, int *max, int *min);


// void max_min(int a[], int n, int *max, int *min){
//     int i;
//     *max = *min = a[0];
//     for (i=1; i<n; i++){
//         if (a[i] > *max)
//             *max = a[i];
//         else if (a[i] < *min)
//             *min = a[i];
//     }
//     printf("%d %d\n", *min, *max);
// }


int main(){
    int n, min, max;
    int a[] = {40,20,10,30,-8};
    n = sizeof(a) / sizeof(a[0]);
    printf("El array es de tamaño %d\n", n);


    //void max_min(a, n, max, min);

    return 0;
}



