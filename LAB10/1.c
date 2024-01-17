#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int *inputArray, int leftIndex, int rightIndex) {
    if (leftIndex >= rightIndex) {
        return; 
    }

    swap(&inputArray[leftIndex], &inputArray[rightIndex]);

    reverseArray(inputArray, leftIndex + 1, rightIndex - 1);
}

int main() {
    srand(time(NULL));

    int Arr[N];
    for (int i = 0; i < N; i++) {
       Arr[i] = rand() % 50;
    }

    printf("Original Array is:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n"); 

    reverseArray(Arr, 0, N - 1);

    printf("Reversed Array is:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    return 0;
}
