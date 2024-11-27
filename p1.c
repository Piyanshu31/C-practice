#include <stdio.h>
#include"myheader.h"
void main()
{
    int row,col;
    int mat[2][2];
    printf("Enter the number of rows and coloums:");
    scanf("%d%d",&row,&col);

    readMatrix(row,col, mat[row][col]);
  //  printMatrix(row,col,  mat[row][col]);
    return 0;
}