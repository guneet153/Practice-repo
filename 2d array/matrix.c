#include<stdio.h>
int main()
{
    int matrix[3][3];
    printf("enter elements of 3x3 matrix:\n");
    for(int i=0;i<3;i++)  // for rows
    {
        for(int j=0;j<3;j++) // for columns
        {
            scanf("%d",&matrix[i][j]);  //scanf is used for input
        }
    }
    printf("the matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);  // for output
        }
        printf("\n");
    }
    return 0;
}