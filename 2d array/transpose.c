//transpose  
//1 2
//3 4
// 1 3
// 2 4
#include<stdio.h>
int main()
{
    int r;
    printf("enter rows");
    scanf("%d",&r);
    printf("enter columns");
    int c;
    scanf("%d",&c);
    int i =r,j=c;
    int a[i][j];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the transpose of matrix is:\n");
    for(int j=0;j<c;j++)  // rows ko columns bnaya
    {
        for(int i=0;i<r;i++)   // columns ko rows bnaya
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}