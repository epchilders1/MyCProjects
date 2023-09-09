#include <stdio.h>

void shift(int *refX, int *refY, int *refZ){
    int *temp1 = *refX; 
    int *temp2 = *refY;
    int *temp3 = *refZ;

    *refY = temp1;
    *refZ = temp2;
    *refX = temp3;
}

int main() {
   int x, y, z;
   printf("Enter any three integers:\n");
   scanf("%d%d%d", &x, &y, &z);
   shift(&x, &y, &z);
   printf("The results after one shift: %d %d %d\n", x, y, z);
   shift(&x, &y, &z);
   printf("The results after another shift: %d %d %d\n", x, y, z);

   return 0;
}
