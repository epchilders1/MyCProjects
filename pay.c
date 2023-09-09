#include <stdio.h>

int main(void){
    double hourlyWage, weeklyPay;
    int hours;

    printf("Enter your hourly pay rate followed by the amount of hours you work in your week (separated by a space): \n");
    scanf("%lf %d", &hourlyWage, &hours);

        if(hours <= 40){
        weeklyPay = hourlyWage * hours;
    }
        if(hours > 40 && hours <= 50){
        weeklyPay = (hourlyWage * 40) + (hours % 40) * (1.5 * hourlyWage);
    }
        if(hours >= 51){
        weeklyPay = (hourlyWage * 40) + (10) * (1.5 * hourlyWage) + (hours % 50) * (2.0 * hourlyWage);
    }

    printf("Your weekly pay is %lf", weeklyPay);

    return 0;
}