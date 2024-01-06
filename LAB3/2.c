#include <stdio.h>

int main() {
    float a, b, c;
   
    scanf("%f %f %f", &a, &b, &c);
    float sum = a + b+ c;
    
    if ( sum >=179.99 && sum < 180.01) {
    printf("triangle");
    }
    else printf("nottriangle");
    
    
}
