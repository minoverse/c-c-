#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double average(double *arr, int size){
    double sum = 0.0;
    for(int i =0;i < size;i++){
        sum +=arr[i];
        printf("%f", arr[i]);
    }
    printf("\n");
    return sum /size;
}
int main(){
    int size;
    printf("put the size of arr:");
    scanf("%d",&size);
    
    double*arr =(double *)malloc(size * sizeof(double));
    if(arr == NULL){
        printf("Memory allocation fail");
        exit(-1);
    }
    else {
        srand(time(NULL));
        for (int i =0; i <size;i++) {
            arr[i] = (double)rand() / RAND_MAX*100;
        }
        double averagevalue = average(arr, size);
        printf("Averagevalue is %f\n",averagevalue);
        free(arr);
    }
    return 0;
}




