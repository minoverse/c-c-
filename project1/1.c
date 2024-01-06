#include <stdio.h>
#include <math.h>


int main() {
    float height =12.4;
    float base = 18.61;
    float area = height * base * 0.5;
    float hypo = sqrt(height*height + base *base);
    printf("%.3f, %.3f", area, hypo); 
    }
