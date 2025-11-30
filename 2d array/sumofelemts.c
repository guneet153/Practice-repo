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
    for(int i=0;i<r;i++) 

    {
        for(int j=0;j<c;j++)
        {
            printf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
    }
printf("the sum of elements is %d",sum);
}