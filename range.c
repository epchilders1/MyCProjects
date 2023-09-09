#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

   int main( int argc, char *argv[] )
   {
    if(argc == 1){
        printf("This program requires at least one argument\n");
        return 0;
    }
    double new[argc];
     for(int i = 0; i < argc; i++ )
     {
       new[i] = atof(argv[i]);
     }

    double max = new[0];
    double min = new[1];

     for(int i = 1; i < argc; i++){
        if(new[i] > max){
            max = new[i];
        }
        if(new[i] < min){
            min = new[i];
        }
     }
    double range = max - min;

    printf("The range of these %d values is %lf\n", argc - 1, range);
   }