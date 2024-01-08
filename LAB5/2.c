#include <stdio.h>
float bisection(float (*function)(float),float a, float b, int n);
float bisection_function(float x);
int main() {
    float a = 0.0;
    float b = 10.0;
    int n = 20;
    float zero = bisection(bisection_function, a, b, n);
    printf ("zero is %.3f", zero);
}
float bisection(float (*function)(float),float a, float b, int n){
    if((*function)(a) * (*function)(b) >= 0) {
        printf("wrong\n");
        return 0;
    }
    float c ;
    for (int i =0; i < n; i++){
        c = (a+b) / 2.0;
        if ((*function)(a) * (*function)(c) < 0){
          b = c;
    }
    else a =c;
    }
    
    return c;
}
float bisection_function(float x) {
    return x * x - 15;
}

