#include <stdio.h> 
#include <string.h>
#include <ctype.h>

void left(char word[]);
void right(char word[]);
void inc(char word[]);
void dec(char word[]);

int main(int argc, char ** argv) {
   //error message 1: argc!=3
   if(argc!=3){
      printf("Invalid number of arguments\n");
      return 1;
   }
   
   FILE* input = fopen(argv[1],"r");
   int errorTwo = 0;
   char badfile[100];
   if(input==NULL){
      strcpy(badfile,argv[1]);
      errorTwo = 1;
   }
   char * shift = argv[2];
   int errorThree = 0;
   char invalid;
   for(int i=0;i<strlen(shift);i++){
      if(shift[i]!='L'&&shift[i]!='R'&&shift[i]!='I'&&shift[i]!='D'){
         errorThree = 1;
         invalid = shift[i];
         break;
      }
   }
   //if statement (if 2 && 3 print 2)
   if(errorThree && errorTwo){
      printf("Could not open file '%s'\n",badfile);
      return 1;
   }
   else if(errorTwo){
      printf("Could not open file '%s'\n",badfile);
      return 1;
   }
   else if(errorThree){
      printf("You threw off my schwiftiness with schwifty '%c'!\n",invalid);
      return 1;
   }

   //for loop for each word in message
   char ch;
   int index = 0;
   int row = 0;
   int space = 0;
   char word[100][100];
   while((ch = fgetc(input))!=EOF) {
      if(ch!=' '&&ch!='\n'){
         if(space == 1){
            row++;
            index = 0;
            space = 0;
         }
         word[row][index]=(ch);
         index++;
      }
      if(ch==' '||ch=='\n'){
         word[row][index] = '\0';
         space = 1;
      }
      }
   int count[row+1];
   fclose(input);

   for(int i=0; i<strlen(shift);i++){
      for(int k=0;k<row+1;k++){
         count[k]=strlen(word[k]);
         if(shift[i]=='R'){
            right(word[k]);
         }
         if(shift[i]=='L'){
            left(word[k]);
         }
         if(shift[i]=='I'){
            inc(word[k]);
         }
         if(shift[i]=='D'){
            dec(word[k]);
         }
      }
   }
  
   for (int k =0; k < row+1; k++){
      for(int j = 0; j < count[k] ; j++){
         if(word[k][j]){
            printf("%c",word[k][j]);
         }
      }
      printf("\n");
   }
   return 0;
}

void left(char word[]) {
  
   int len = strlen(word);
  
   char temp = word[0];
   for(int i=0;i<len;i++){
      word[i]=word[i+1];
   }
   word[len-1]=temp;

}

void right(char word[]) {
   //determine length of word
   
   int len = strlen(word);
  
   char temp = word[len-1];
   for(int i=1;i<len;i++){
      word[len-i] = word[len-i-1];
      
   }
   word[0]=temp;
   
}

void inc(char word[]) {
   
   int len = strlen(word);
   for(int i =0;i<len;i++){
      //lowercase z to lowecase a
      if(word[i] == 122){
         
         word[i] = 97;
         
      }
      //uppercase Z to uppercase A
      else if(word[i]==90){
         
         word[i] = 65;
         
      }

      else if(word[i]=='9'){
         
         word[i]='0';
         
      }
      else if(isalpha(word[i])){
         word[i]=word[i]+1;
      }
      else if(isdigit(word[i])){
         word[i]=word[i]+1;
      }
   }
}

void dec(char word[]) {
  
   int len = strlen(word);
   for(int i =0;i<len;i++){
      if(word[i] == 97){
         
         word[i] = 122;
      
      }
      else if(word[i]==65){
        
         word[i] = 90;
        
      }
      else if(word[i]=='0'){
         
         word[i]='9';
       
      }
      else if(isalpha(word[i])){
         word[i]=word[i]-1;
      }
      else if(isdigit(word[i])){
         word[i]=word[i]-1;
      }
   }
}
