#include <stdio.h>

int main() {
    int distance = 107;
    float  fuel = 13.19;
    float avg = fuel / distance * 100;
    printf("%.3f", avg);
}
