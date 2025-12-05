#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for( int j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        }
        else
        {
            int a=1;
            for(int j=1;j<=i;j++)
            { 
                printf("%c",a+64);
                a++;
            }
        }
       printf("\n");
    }
    
    return 0;
}

