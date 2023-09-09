#include <stdio.h>  
#include <math.h>

int main(void){
    int twentys, tens, fives, ones;
    int quarters, dimes, nickels, pennies;
    const int twentyW = 20;
    const int tensW = 10;
    const int fivesW = 5;
    const int onesW = 1;
    const int quartersW = 25;
    const int dimesW = 10;
    const int nickelsW = 5;
    const int penniesW = 1;
    const double billLength = 6.14;
    const double quarterLength = 0.955;
    const double dimeLength = 0.705;
    const double nickelLength = 0.835;
    const double pennyLength = 0.750;
    int totalDollars;
    int totalCents;
    int centsRemainder;
    int dollarPlus;
    double moneyLength;

    printf("Enter the amount of $20s: \n");
    scanf("%d", &twentys);
    printf("Enter the amount of $10s: \n");
    scanf("%d", &tens);
    printf("Enter the amount of $5s: \n");
    scanf("%d", &fives);
    printf("Enter the amount of $1s: \n");
    scanf("%d", &ones);
    printf("Enter the amount of quarters: \n");
    scanf("%d", &quarters);
    printf("Enter the amount of dimes: \n");
    scanf("%d", &dimes);
    printf("Enter the amount of nickels: \n");
    scanf("%d", &nickels);
    printf("Enter the amount of pennies: \n");
    scanf("%d", &pennies);

    totalDollars = (twentys * twentyW) + (tens * tensW) + (fives * fivesW) + (ones * onesW);
    totalCents = (quarters * quartersW) + (dimes * dimesW) + (nickels * nickelsW) + (pennies * penniesW);
    centsRemainder = totalCents % 100;
    dollarPlus = totalCents / 100;
    totalDollars = totalDollars + dollarPlus;
    moneyLength = (twentys * billLength) + (tens * billLength) + (fives * billLength) + (ones * billLength) + (quarters * quarterLength) + (dimes * dimeLength) + (nickels * nickelLength) + (pennies * pennyLength);
    moneyLength = (int)round(moneyLength);

    printf("You have %d dollars and %d cents\n", totalDollars, centsRemainder);
    printf("The length of your money is roughly %0.0lf inches", moneyLength);

    return 0;
}