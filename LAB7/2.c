#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
#define Days 30

void fillRandomValues(double arr[], int n, double min, double max) {
    for (int i = 0; i < n; i++) {
        arr[i] =  ((double)rand()) / RAND_MAX * (max - min) + min;
    }
}

double getMean(const double arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int compare(const void *a, const void *b) {
    return (*(double *)a > *(double *)b) - (*(double *)a < *(double *)b);
}


double getMedian(double arr[], int n) {
    qsort(arr, n, sizeof(double), compare);

if (n % 2 == 0) {     
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}

double getStandardDeviation(double arr[], int n, double mean) {
    double sumSquaredDiff = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = arr[i] - mean;
        sumSquaredDiff += pow(diff, 2);
    }
    return sqrt(sumSquaredDiff / n);
}

int main() {
    srand((unsigned int)time(NULL));
    double Jul[ Days];
    fillRandomValues(Jul,  Days, 18.0, 28.0);

    double mean = getMean(Jul,  Days);
    double median = getMedian(Jul,  Days);
    double standardeviation = getStandardDeviation(Jul,  Days, mean);

    printf("Mean temperature in July is: %.2f\n", mean);
    printf("Median temperature in July is: %.2f\n", median);
    printf("Standard deviation in July is: %.2f\n", standardeviation);

    return 0;
}
