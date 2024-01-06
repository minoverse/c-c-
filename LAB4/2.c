#include <stdio.h>

int main() {
    float c,f, C;
    scanf("%f",&f);
    c = (f -32) *5/9 ;
    C = ((int)c / 10) * 10;
    
    printf("%.f", C);
    
}
