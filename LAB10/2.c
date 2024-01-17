#include <stdio.h>


int Coefficient(int a, int b) {
    if (b == 0 || b == a) {
        return 1; 
    } else {
       
        return Coefficient(a - 1, b - 1) + Coefficient(a - 1, b);
    }
}


void Pascal(int n) {
    for (int i = 0; i < n; i++) {
       
        for (int s = 0; s < n - i; s++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%2d  ", Coefficient(i, j));
        }

        printf("\n");
    }
}

int main() {
    int n = 5; 

    printf("Pascal's Triangle %d rows:\n", n);
    Pascal(n);
    return 0;
}
