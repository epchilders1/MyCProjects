#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int numRows, int numCols)
{
    int** matrix = 0;
    matrix = malloc((numRows) * sizeof(int*));
    for(int i = 0; i < numRows; i++){
        matrix[i] = malloc((numCols) * (sizeof(int))); //why do you have to allocate for the amount of columns too? doesnt this already go through every element in the array and allocate enough room for an integer anyway?
    }
   return matrix;
}

void freeMatrix(int **matrix, int numRows, int numCols)
{
    for(int i = 0; i < numRows; i++){
            free(matrix[i]);
            matrix[i] = NULL;
        }
        free(matrix);
        matrix = NULL;
}

void readMatrix(FILE *fp, int **matrix, int numRows, int numCols)
{
for(int r = 0; r < numRows; r++){
    for(int c = 0; c < numCols; c++){
   fscanf(fp, "%d ", matrix[r]+c);
   printf("%d ", matrix[r][c]);
}
printf("\n");
}
}

void printMatrix(int **matrix, int numRows, int numCols)
{
 for(int r = 0; r < numRows; r++){
    for(int c = 0; c < numCols; c++){
   printf(" %d", matrix[r][c]);
}
printf("\n");
}
}

int rangeRow(int **matrix, int numRows, int numCols, int r)
{
    int minRow = matrix[r][0];
    int maxRow = matrix[r][0];
    for(int i = 0; i < numCols; i++){
        if(matrix[r][i] > maxRow){
            maxRow = matrix[r][i];
        }
        if(matrix[r][i] < minRow){
            minRow = matrix[r][i];
        }
    }
    int range = maxRow - minRow;
   return range;
}

void printCorners(int **matrix, int numRows, int numCols)
{
   printf("%d %d\n", matrix[0][0], matrix[0][numCols - 1]);
   printf("%d %d\n", matrix[numRows - 1][0], matrix[numRows - 1][numCols - 1]);
}

int sumSubMatrix(int **matrix, int startRow, int endRow, int startCol, int endCol)
{
    int sum = 0;
   for(int i = startRow; i < endRow + 1; i++){
      for(int j = startCol; j < endCol + 1; j++){
         sum += matrix[i][j];
      }
   }
   return sum;

}

