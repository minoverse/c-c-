#include <stdio.h>


void naturalNumReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" + ");
        }
    }
    printf("\n");
}


void Num(int N, int *arr, int index, int size) {
    for (int i = 1; i <= N; i++) {
        arr[index] = i;

        if (N - i == 0) {
           
            naturalNumReverse(arr, index + 1);
        }

        
       Num(N - i, arr, index + 1, size);
    }
}

int main() {
    int N = 5; 
    int arr[N]; 

    Num(N, arr, 0, N);

    return 0;
}
