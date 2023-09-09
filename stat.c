#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getInt(char *prompt);
void getData(int n, int *array);
void calcMeanAndStdDev(int n, int *array, double *pMean, double *pStdDev);

int main(void) {
    int size = getInt("Enter a positive integer for array size: ");

    printf("Enter %d integers:\n", size);
    int *array = malloc(size * sizeof(int));
    getData(size, array);

    double mean, std_dev;
    calcMeanAndStdDev(size, array, &mean, &std_dev);

    printf("Mean is %g\n", mean);
    printf("Standard deviation is %g\n", std_dev);

    return 0;
}

// Print out the prompt, scan in an integer and return it.
int getInt(char *prompt) {
    printf("%s", prompt);
    int n;
    scanf("%d", &n);
    return n;
}

// Do not change anything above this line
//
// Scan in n (n>0) integers and store them in an array.
void getData(int n, int *array) {
    // add your code here
    // No [] allowed in this function
int num;

for(int i = 0; i < n; i++){
    scanf("%d", &num);
    *(array + i) = num;
}
}

// Given an array of n (n>0) integers, Calculate the mean and standard deviation.
void calcMeanAndStdDev(int n, int *array, double *pMean, double *pStdDev) {
    // add your code here
    // No [] allowed in this function
int total = 0;
    double variance = 0.0;
    double temp;
    for(int i = 0; i < n; i++){
        total = total + *(array + i);
        //printf("Num: %d\n", nums[i]);
        //printf("Total: %d\n", total);

    }

    *pMean =((double)total) / n;

    for(int i = 0; i < n; i++){
        temp = *(array + i) - *pMean;
        variance = variance + (temp * temp);
        temp = 0.0;
    }
    variance = ((double)variance) / n;

    //printf("Mean is %.2lf\n", mean);
    *pStdDev = sqrt(variance);
    //printf("Standard deviation is %.2lf\n", stddev);

}







/*
#include <stdio.h>
#include <math.h>

void getData(int size, int* array){
double num;

for(int i = 0; i < size; i++){
    scanf("%lf", &num);
    array[i] = num;
}
}
void calcMeanAndStdDev(int size, int *nums, double mean, double stddev){
    int total = 0;
    int variance = 0;
    int temp;
    for(int i = 0; i < size; i++){
        total = total + nums[i];
        //printf("Num: %d\n", nums[i]);
        //printf("Total: %d\n", total);

    }

    mean = total / size;

    for(int i = 0; i < size; i++){
        temp = nums[i] - mean;
        variance = variance + (temp * temp);
        temp = 0;
    }
    variance = (double)variance / size;

    //printf("Mean is %.2lf\n", mean);
    stddev = sqrt(variance);
    //printf("Standard deviation is %.2lf\n", stddev);
}

int main(void){
    int size;
    double mean = 0;
    double stddev = 0;
    
    printf("Enter a positive integer for array size: \n");
    scanf("%d", &size);
    int nums[size];
    printf("Enter %d integers: \n", size);
    getData(size, nums);
    calcMeanAndStdDev(size, nums, &mean, &stddev);
    
    printf("Mean is %g\n", mean);
    printf("Standard deviation is %g\n", stddev);
    
    
    return 0;
}
*/