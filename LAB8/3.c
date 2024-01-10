#include <stdio.h>

int* findmax(int* array , int arraySize) {
    int *max = array;
    for (int i =0; i < arraySize; i++){
        if( array[i] > *max){
            max = array + i;
        }
    }
    return max;
}
int main(){
    int arr[] = {2, 5, 0, 17, 25, 11};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("original array is:");
    for (int i =0; i < arr_size; i++){
        printf("%d ", arr[i]);
    }
    int* max = findmax(arr, arr_size);
    printf(" maxvalue of array:");
    printf("%d", *max);
    return 0;
}
