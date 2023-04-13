#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;
    printf("Array length: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        printf("Introduzca el entero %dº: ", i+1);
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */

    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    for(i = 0; i < n; i++)
        printf("%d ", *(arr + i));
        printf("\n");
    free(arr);
    return 0;
}