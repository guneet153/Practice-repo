// maximum element with its index
#include<stdio.h>
int main()
{
    int matrix[3][3];
    printf("enter elements of matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int max=matrix[0][0];
    int maxrow=0; // to store row index of max element
    int maxcol=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j]>max)
            {
                max=matrix[i][j];
                maxrow=i; // max ka row ka index daal dia
                maxcol=j; // max ka column ka index daal dia1 2 
            }
        }
    }

    printf("the maximum element in the matrix is %d \n",max);
    printf(" its index is %d,%d",maxrow,maxcol);

    return 0;
}