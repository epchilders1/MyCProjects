#include <stdio.h>

int main(void){

    int num;
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        for(int x = 0; x < num; x++){
            if(i == 0 || i == num - 1){
            printf("x");
            }
            else if(x == 0 || x == num - 1){
            printf("x");
            }
            else{
                printf(" ");
            }
        
        }
        printf("\n");
    } 

    return 0;
}