#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7 

int binarySearch(int *arr, int left, int right, int num) {
    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == num) return middle;

        (arr[middle] > num) ? (right = middle - 1) : (left = middle + 1);
    }

    return -1;
}


int main() {
    srand(time(NULL));

    
    int sortedarr[N];
    sortedarr[0] = 0; 

    for (int i = 1; i < N; i++) {
        sortedarr[i] = sortedarr[i - 1] + rand() % 10 + 1; 
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d ", *(sortedarr + i));
    }
    printf("\n");

    
    int element = sortedarr[rand() % N];
    
    
    int result = binarySearch(sortedarr, 0, N - 1, element);

    if (result != -1) {
        printf("element %d is founded at index %d.\n", element, result);
    } else {
      return - 1;
    }

    return 0;
}
