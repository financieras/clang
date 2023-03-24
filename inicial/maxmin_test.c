#include<stdio.h>

void find(int a[], int n, int *min, int *max){
    if(n < 1) return;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    *max = a[0];
    *min = a[n - 1]; // the last element
    
}

int main(){
    int a[5];
    int n, min, max; // corrected types
    printf("husnegtiinn elementiin toog oruul: ");

    if(scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    find(a, n, &min, &max); // take the addresses of `min` and `max`
    printf("ih ni : %d \nbaga ni : %d", max, min);
    return 0;
}