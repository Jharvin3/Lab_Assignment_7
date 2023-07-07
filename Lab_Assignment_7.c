#include <stdio.h>

void bubble_sort(int arr[], int n){
    int i, j, temp, swaps;
    for(i = 0; i < n-1; i++){
        swaps = 0;
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
        printf("index #%d: %d\n", i+1, swaps);
        if(swaps == 0)
            break;
    }
    
}

int main(){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);

    return 0;
}