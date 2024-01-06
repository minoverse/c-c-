#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3

void Random(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = (float)(rand() % 11); 
        }
    }
}

void printarr(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%0.3f\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    srand((unsigned int)time(NULL));

    float arr1[SIZE][SIZE];
    float arr2[SIZE][SIZE];
    float result[SIZE][SIZE];

    Random(arr1);
    Random(arr2);

    printf("arr 1 is:\n");
    printarr(arr1);

    printf("arr 2 is:\n");
    printarr(arr2);

    return 0;
}
