#include <stdio.h> 
#include <string.h>
#include <ctype.h>


int isPositiveInteger(char token[]){
   int true = 0;
   for(int i = 0; i < strlen(token);i++){
      if(!isdigit(token[i])){
         true = 0;
         break;
      }
      else{
         true = 1;
      }
   }
   return true;
}


int isNegativeInteger(char token[]){
   int true = 0;
   int thing = 1;
   if(token[0] == '-'){
      true = 1;
   }
   else thing = 0;

   for(int i=1; i < strlen(token); i++){
      if(!isdigit(token[i])){
         thing = 0;
         break;
      }
      else{
         true = 1;
      }
   }
   if(!thing) {
    true = 0;
   }
   return true;
}

int isBinaryNumber(char token[]){

   int true = 0;
   int thing = 1;

   if((token[0] == '0')&&(token[1] == 'b')){
      true = 1;
   }
   else{
      true = 0;
      thing = 0;
   }

   for(int i = 2; i < strlen(token); i++){
      if((token[i] != '0')&&(token[i] != '1')){
         thing = 0;
         true = 0;
      }
   }

   if(!isdigit(token[2])){
     thing = 0;
   }
   if(!thing){
    true = 0;
   }
   return true;
}

int isGuid(char token[]){
   int true = 0;
   int thing = 1;
   if(token[8] == '-' && token[13] == '-' && token[18]== '-' && token[23] == '-'){
      true = 1;
   }
   else thing = 0;

   for(int i = 0;i < 7; i++){
      if(isdigit(token[i]) || (token[i]>64 && token[i]<71)||(token[i]>96 && token[i]<103)){
         true = 1;
      }
      else{
         thing = 0;
         break;
      }
   }
   for(int i=9; i < 13; i++){
      if(isdigit(token[i]) || (token[i]>64 && token[i]<71)||(token[i]>96 && token[i]<103)){
         true = 1;
      }
      else{
         thing = 0;
         break;
      }
   }
   for(int i=14;i<18;i++){
      if(isdigit(token[i]) || (token[i]>64 && token[i]<71)||(token[i]>96 && token[i]<103)){
         true=1;
      }
      else{
         thing = 0;
         break;
      }
   }
   for(int i=19;i<23;i++){
      if(isdigit(token[i]) || (token[i]>64 && token[i]<71)||(token[i]>96 && token[i]<103)){
         true = 1;
      }
      else{
         thing = 0;
         break;
      }
   }
   for(int i=24; i < strlen(token); i++){
      if(isdigit(token[i]) || (token[i]>64 && token[i]<71)||(token[i]>96 && token[i]<103)){
         true = 1;
      }
      else{
         thing = 0;
         break;
      }
   }
   if(!thing){
     true = 0;
   }
   if(strlen(token) != 36){
     true = 0;
   }
   return true;
}

int isPositiveFloatingPoint(char token[]){
   int true = 0;
   int decimal = 0;
   int thing = 1;
   if(isdigit(token[0])) {
      true = 1;
   }
   else {
    thing = 0;
   }
   if (isdigit(token[strlen(token)-1])){
      true = 1;
   }
   else {
      thing = 0;
   }
   for(int i = 0; i < strlen(token); i++){
      if(token[i]=='.'){
         decimal++;
      }
      if(token[i] != '.' && !isdigit(token[i])){ 
        thing = 0;
      }
   }

   if(decimal != 1){ 
    true = 0;
   }
   if(!thing){
    true = 0;
   }
   return true;
}

int isNegativeFloatingPoint(char token[]){
   int true = 0;
   int decimal = 0;
   int thing = 1;

   if(token[0] != '-') thing = 0;

   if(isdigit(token[1])) {
      true = 1;
   }
   else {
    thing = 0;
   }
   if (isdigit(token[strlen(token)-1])){
      true = 1;
   }
   else {
    thing = 0;
   }
   for(int i = 1; i < strlen(token); i++){
      if(token[i] == '.'){
         decimal++;
      }
      if(token[i] != '.' && !isdigit(token[i])){ 
        thing = 0;
      }
   }

   if(decimal!=1){
    true = 0;
   }
   if(!thing){
    true = 0;
   }
   return true;
}


int main() {
   char token[50];

   printf("Enter a token to identify, EOF to stop:\n");

   while(scanf("%s",token) != EOF){
      if(isPositiveInteger(token)){
         printf("The token is a positive integer\n");
      }
      else if(isNegativeInteger(token)){
         printf("The token is a negative integer\n");
      }
      else if(isBinaryNumber(token)){
         printf("The token is a binary number\n");
      }
      else if(isGuid(token)){
         printf("The token is a guid\n");
      }
      else if(isPositiveFloatingPoint(token)){
         printf("The token is a positive floating-point number\n");
      }
      else if(isNegativeFloatingPoint(token)){
         printf("The token is a negative floating-point number\n");
      }
      else{
         printf("The token cannot be identified\n");
      }
      printf("Enter a token to identify, EOF to stop:\n");
   }
   
   return 0;
}
