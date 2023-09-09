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

    printf("Mean is %.2lf\n", mean);
    stddev = sqrt(variance);
    printf("Standard deviation is %.2lf\n", stddev);
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
    calcMeanAndStdDev(size, nums, mean, stddev);
    /*
    printf("Mean is %lf\n", mean);
    printf("Standard deviation is %lf\n", stddev);
    */
    
    return 0;
}