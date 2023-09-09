#include <stdio.h>
#include <ctype.h>
#include <string.h>

int identity(char *word){
    int posInt = 1;
    int negInt = 1;
    int binary = 1;
    int GUID = 1;
    int posFloat = 1;
    int negFloat = 1;
    for(int i = 0; i < strlen(word); i++){
        if(isdigit(word[i]) == 0){
            posInt = 0;
        }
}
if(posInt){
    printf("The token is a positive integer\n");
}
    for(int i = 0; i < strlen(word); i++){
        if(i == 0 && word[i] != '-'){
            negInt = 0;
        }
        if(i > 0 && isdigit(word[i]) == 0){
            negInt = 0;
        }
    }
    if(negInt){
    printf("The token is a negative integer\n");
}
    for(int i = 0; i < strlen(word); i++){
        if(i == 0 && word[i] != '0'){
            binary = 0;
        }
        if(i == 1 && word[i] != 'b'){
            binary = 0;
        }
        if(isdigit(word[i]) == 0 && i > 1){
                binary = 0;
            }
        if(i > 1 && isdigit(word[i]) && word[i] != '0'){
            if(word[i] != '1'){
                binary = 0;
            }
        }
    }
if(binary){
    printf("The token is a binary number\n");
}
    for(int i = 0; i < strlen(word); i++){
        if(strlen(word) != 36){
            GUID = 0;
        }
        if(i == 8 && word[i] != '-'){
            GUID = 0;
        }
        if(i == 13 && word[i] != '-'){
            GUID = 0;
        }
        if(i == 18 && word[i] != '-'){
            GUID = 0;
        }
        if(i == 23 && word[i] != '-'){
            GUID = 0;
        }
    if(i != 8 && i != 13 && i != 18 && i != 23){
        if(isdigit(word[i]) == 0){
            if(isalpha(word[i]) == 0){
            GUID = 0;
        }
        }
    }
    
    }
if(GUID){
    printf("The token is a guid\n");
}
 int temp = 0;
    for(int i = 0; i < strlen(word); i++){
        if(i == 0 && isdigit(word[i]) == 0){
            posFloat = 0;
        }
        if(word[i] == '.'){
            if(isdigit(word[i-1]) == 0 || isdigit(word[i+1]) == 0){
                posFloat = 0;
            }
            temp = 1;
        }
    }
   
if(posFloat && temp){
    printf("The token is a positive floating-point number\n");
}
  temp = 0;
    for(int i = 0; i < strlen(word); i++){

        if(i == 0 && word[i] != '-'){
            negFloat = 0;
        }
        if(word[i] == '.'){
            if(isdigit(word[i-1]) == 0 || isdigit(word[i+1]) == 0){
                negFloat = 0;
            }
            temp = 1;
        }
    }
if(negFloat && temp){
    printf("The token is a negative floating-point number\n");
}

else if(posInt == 0 && negInt == 0 && GUID == 0 && binary == 0 && posFloat == 0 && negFloat == 0){
    printf("The token cannot be identified\n");
}

return 0;
}

int main(void){
    int num = 1;
    char word[50];
    while(num){
        printf("Enter a token, EOF to stop:\n");
        scanf("%s", &word);
        if (feof(stdin))
         {
             break;
         }
         identity(word);
    }
}
