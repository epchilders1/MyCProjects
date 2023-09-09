#include <stdio.h>

int main(void){

    int lower, upper;
    int num;
    int greater = 0;
    int less = 0;
    int between = 0;

    printf("Enter a lower and upper bound:\n");
    scanf("%d %d", &lower, &upper);

    printf("Enter integers, type -1 to stop:\n");

    while(num != -1){
        scanf("%d", &num);
            if(num > upper){
                greater++;
            }
            if(num < lower && num > 0){
                less++;
            }
            else if(num >= lower && num <= upper){
                between++;
            }
    }

    printf("less: %d\n", less);
    printf("between: %d\n", between);
    printf("greater: %d\n", greater);





    return 0;
}