#include <stdio.h>

void reverseArray
(int* array , int arraySize){
    int *first = array;
    int *last = array + arraySize - 1;
    while (first < last) {
        float tmp = *first;
    *first = *last;
    *last = tmp;
    first++;
    last--;
    }
}

int main (){
   int arr[] ={1, 2, 3, 4, 5, 6, 7, 8};
   int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("original array is:");
    for (int i =0; i < arr_size; i++){
        printf("%d", arr[i]);
    }
    printf("\nreversal array is:");
    reverseArray(arr , arr_size);
    for (int i =0; i < arr_size; i++){
        printf("%d", arr[i]);
    }
}
