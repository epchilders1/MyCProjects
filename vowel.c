#include <stdio.h>
#include <string.h>
int main(void){


    char word[50];
    char vowel[] = "aeiou";
    int a = 0;
    int e = 0;
    int i1 = 0;
    int o = 0;
    int u = 0;
    fgets(word, 50, stdin);
    
    for(int i = 0; i < strlen(word); i++){
            if(word[i] == vowel[0]){
                a++;
            }
           else if(word[i] == vowel[1]){
                e++;
            }
           else if(word[i] == vowel[2]){
                i1++;
            }
            else if(word[i] == vowel[3]){
                o++;
            }
            else if(word[i] == vowel[4]){
                u++;
            }
    }

    printf("The vowel a occurred %d times \n", a);
    printf("The vowel e occurred %d times \n", e);
    printf("The vowel i occurred %d times \n", i1);
    printf("The vowel o occurred %d times \n", o);
    printf("The vowel u occurred %d times \n", u);

    return 0;
}