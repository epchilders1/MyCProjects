#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Name: Evan Childers
Class: CS-100-007
Professor: Mr. Yessick
This program will ask a series of questions to determine your fortune.
"Fortune favours the brave"
*/
int main(void){

  char direction[6];
  int num;
  char yay[4];
  char handD[6];
  char speed[5];
  char size[6];
  char color[6];
  char upordown[5];
  char difficulty[5];
  char LCR[7];
  char build[8];
  char open[7];
  char weather[7];
printf("Answer wih any of the given answer choices (make sure to have correct spelling) \n");
  printf("north, south, east, or west:  ");
  scanf("%s", &direction);


    if(strcmp(direction, "north") == 0){
        
        printf("Enter a positive integer:  ");
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("yes or no:  ");
            scanf("%s", &yay);

            if(strcmp(yay, "yes") == 0){
                printf("lake");
            }
             if(strcmp(yay, "no") == 0){
                printf("pool");
            }
        }
        else{
            printf("beach");
        }
    }
    
    if(strcmp(direction, "south") == 0){

        printf("left or right:  ");
        scanf("%s", &handD);

        if(strcmp(handD, "left") == 0){
            printf("jog");
        }
        
        else if(strcmp(handD, "right") == 0){
            printf("fast or slow:  ");
            scanf("%s", &speed);

            if(strcmp(speed, "fast") == 0){
                printf("bike");
            }
            
            else if(strcmp(speed, "slow") == 0){
                printf("big or small:  ");
                scanf("%s", &size);

                if(strcmp(size, "big") == 0){
                    printf("run");
                }
                
                else if(strcmp(size, "small") == 0){
                    printf("walk");
                }
                
            }

        }
    }

    if(strcmp(direction, "east") == 0){

        printf("red, white, or gray:  ");
        scanf("%s", &color);

        if(strcmp(color, "red") == 0){
            printf("yes or no:  ");
            scanf("%s", &yay);

            if(strcmp(yay, "yes") == 0){
                printf("tree-climb");
            }
            else if(strcmp(yay, "no") == 0){
                printf("up or down:  ");
                scanf("%s", &upordown);

                if(strcmp(upordown, "up") == 0){
                    printf("top-rope");
                }

                else if(strcmp(upordown, "down") == 0){
                    printf("boulder");
                }

            }
        }
        if(strcmp(color, "white") == 0){
            printf("easy or hard:  ");
            scanf("%s", &difficulty);

            if(strcmp(difficulty, "easy") == 0){
                printf("longboard");
            }
            
            else if(strcmp(difficulty, "hard") == 0){
                printf("workout");
            }
    }
        if(strcmp(color, "gray") == 0){
            printf("left, center, or right:  ");
            scanf("%s", &LCR);

            if(strcmp(LCR, "left") == 0){
                printf("build or destroy:  ");
                scanf("%s", &build);

                if(strcmp(build, "build") == 0){
                    printf("hike");
                }

                else if(strcmp(build, "destroy") == 0){
                    printf("spelunk");
                }
            }
            
            if(strcmp(LCR, "center") == 0){
                printf("open or closed:  ");
                scanf("%s", &open);

                if(strcmp(open, "open") == 0){
                    printf("zoo");
                }

                else if(strcmp(open, "closed") == 0){
                    printf("aquarium");
                }
            }

            if(strcmp(LCR, "right") == 0){
                printf("museum");
            }
        }

    }
    if(strcmp(direction, "west") == 0){
        printf("enter an integer:  ");
        scanf("%d", &num);

        if(num >= 0){
            printf("frisbee");
        }
        else{
            printf("sunny or cloudy:  ");
            scanf("%s", &weather);

            if(strcmp(weather, "sunny") == 0){
                printf("tennis");
            }

            else if(strcmp(weather, "cloudy") == 0){
                printf("racquetball");
            }
        }
    }

    return 0;
}