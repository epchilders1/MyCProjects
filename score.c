#include <stdio.h>

int main(void){
    int score1, score2, score3, score4;
    double average;

    printf("Enter your first exam score: \n");
    scanf("%d", &score1);
    printf("Enter your second exam score: \n");
    scanf("%d", &score2);
    printf("Enter your third exam score: \n");
    scanf("%d", &score3);
    printf("Enter your fourth exam score: \n");
    scanf("%d", &score4);

   
        if(score1 <= score2 && score1 <= score3 && score1 <= score4){
        average = (double)(score2 + score3 + score4) / 3.0;
    }
        if(score2 <= score1 && score2 <= score3 && score2 <= score4){
        average = (double)(score1 + score3 + score4) / 3.0;
    }
        if(score3 <= score1 && score3 <= score2 && score3 <= score4){
        average = (double)(score1 + score2 + score4) / 3.0;
    }
        if(score4 <= score1 && score4 <= score2 && score4 <= score3){
        average = (double)(score2 + score3 + score1) / 3.0;
    }
    printf("Your average exam score with the lowest score dropped is %lf", average);

    return 0;
}