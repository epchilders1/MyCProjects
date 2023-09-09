#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

   char word1[120];
   int i;
   
   printf("Enter a word/string, we will print it in its reverse case:\n");
   scanf("%c", word1);
   
   for(i = 0; i < strlen(word1); i++){
      if(isalpha(word1[i])){
         if(isupper(word1[i]) == 0){
            tolower(word1[i]);
         }
         else{
            toupper(word1[i]);
         }
      }
      else{
         continue;
}
}

printf("%s", word1);

   return 0;
}
