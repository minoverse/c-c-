#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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

void add(float arr1[SIZE][SIZE], float arr2[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void multiply(float arr1[SIZE][SIZE], float arr2[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0.0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

float Trace(float arr[SIZE][SIZE]) {
    float trace = 0.0;
    for (int i = 0; i < SIZE; i++) {
        trace += arr[i][i];
    }
    return trace;
}

float Determinant(float arr[SIZE][SIZE]) {
    float determinant = 0.0;
    
    for (int i = 0; i < SIZE; i++) {
        float minor[SIZE-1][SIZE-1];
        
        for (int j = 1; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                if (k < i) {
                    minor[j - 1][k] = arr[j][k];
                } else if (k > i) {
                    minor[j - 1][k - 1] = arr[j][k];
                }
            }
        }
        
        determinant += pow(-1, i) * arr[0][i] * Determinant(minor);
    }
    
    return determinant;
}

int main() {
    srand((unsigned int)time(NULL));

    float arr1[SIZE][SIZE];
    float arr2[SIZE][SIZE];
    float addresult[SIZE][SIZE];
    float multipleresult[SIZE][SIZE];

    Random(arr1);
    Random(arr2);

    printf("arr 1 is:\n");
    printarr(arr1);

    printf("arr 2 is:\n");
    printarr(arr2);

    add(arr1, arr2, addresult);
    printf("Addition of matrices is:\n");
    printarr(addresult);
    printf("Trace of the sum matrix is: %0.3f\n", Trace(addresult));

    multiply(arr1, arr2, multipleresult);
    printf("Multiplication of matrices is:\n");
    printarr(multipleresult);
    printf("Determinant of the product matrix is: %0.3f\n", Determinant(multipleresult));

    
    printf("Trace of matrix A is: %0.3f\n", Trace(arr1));
    printf("Determinant of matrix A is: %0.3f\n", Determinant(arr1));

    printf("Trace of matrix B is: %0.3f\n", Trace(arr2));
    printf("Determinant of matrix B is: %0.3f\n", Determinant(arr2));

    return 0;
}
