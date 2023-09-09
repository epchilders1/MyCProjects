#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
 int num = atoi(argv[3]);
 while (num > 0) {
 int v = num % 10;
 printf("%c ", argv[1][v]);
 printf("%c\n", argv[2][v]);
 num = num / 10;
 }
 return 0;
}