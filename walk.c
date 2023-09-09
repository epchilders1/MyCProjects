#include <stdio.h>
int main(void){
    int hour1, hour2;
    int minute1, minute2;
    double sum;

    printf("Enter the start time: \n");
    scanf("%d %d", &hour1, &minute1);
    
    printf("Enter the end time: \n");
    scanf("%d %d", &hour2, &minute2);
    
    hour2 = (hour2 * 60) + minute2;
    hour1 = (hour1 * 60) + minute1;
    
   

    sum = (hour2 - hour1) * 4;
    printf("You have walked %f miles", sum / 60);
    
    return 0;

}