#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void){
    char player1[9];
    int num;
    int seed = time(0);
    srand(time(0));
     num = rand();
    
    printf("Lets play rock paper scissors! 3, 2, 1 (enter answer in all lowercase)\n");
    scanf("%s", &player1);
    

    if(strcmp(player1, "rock") == 0){
        if(num % 3 == 0){
            printf("We both put rock! try again");
        }
        if(num % 3 == 1){
            printf("I put paper! You lose howwwwwwwww you just lost the the computer bro howwwwww see you in the regular season bro");
        }
        if(num % 3 == 2){
            printf("I put scissors. You won it's fine whatever I don't mind");
        }
    }
    if(strcmp(player1, "paper") == 0){
        if(num % 3 == 0){
            printf("I put rock. You won omfg I hate you.");
        }
        if(num % 3 == 1){
            printf("We both put paper! Try again bud");
        }
        if(num % 3 == 2){
            printf("I put scissors. I won AHAHAHHAHAHAHAHAHHAHAHH BROOOO LOLOLOLOL");
        }
    }
    if(strcmp(player1, "scissors") == 0){
        if(num % 3 == 0){
            printf("I put rock! I won are you even trying?");
        }
        if(num % 3 == 1){
            printf("I put paper. You win you are definitely cheating bro");
        }
        if(num % 3 == 2){
            printf("We both put scissors. Try again dingus");
        }
    }

    else if((strcmp(player1, "rock") != 0 ) && (strcmp(player1, "paper") != 0 ) && (strcmp(player1, "scissors") !=0)){
        printf("Bro didn't even want to play lololol your supposed to put rock paper or scissors idiot");
    }


    return 0;
}