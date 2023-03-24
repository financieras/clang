#include <stdio.h>

int main(){
    int arr[6] = {1,2,3,4,5,6};
    
    for(int i=0; i<6; i++){
        if(arr[i]%2){
            printf("%i ", arr[i]);      // imprime solo los impares
        }
    }
    return 0;
}