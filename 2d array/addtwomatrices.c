#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],sum[2][2];
    printf("enter elements of first  matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++) 
        {
            scanf("%d",&a[i][j]);  
        }
    }
    printf("enter elements of second  matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);  
        }
    }
    // adding two matrices
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of two matrices is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);  // for output
        }
        printf("\n");
    }
}