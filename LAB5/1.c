#include <stdio.h>
float integrate(float (*function_to_integrate)(float),float a, float b, int N);
float integrate_function (float x);
int main(){
    float a =10.0;
    float b = 20.0;
    int N = 1000;
    float result = integrate(integrate_function, a, b, N);
    printf("integrate result is %.3f\n", result);
    }
   
float integrate(float (*function_to_integrate)(float),float a, float b, int N) {
    float dx = (b - a) / N;
    float sum =0.00;
    for(int i =1; i <= N; i++) {
        float mi = a + (i - 0.5) * dx;
       float f=function_to_integrate(mi);
        sum += f *dx;
    } 
    return sum;
}
float integrate_function (float x) {
    return x * x - x;
}


