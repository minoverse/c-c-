#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(float*a, float*b){
     
    float tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(){
    srand(time(0));
     float a = (float)rand()/(float)(RAND_MAX/10);
     float b = (float)rand()/(float)(RAND_MAX/10);
     printf("before swap a :%f,before swap b :%f\n", a, b);
      swap(&a,&b);
     printf("after swap a :%f,after swap b :%f", a, b);
     return 0;
}




