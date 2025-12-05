#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("%d", j);
            //printf("%d",i);  //for 1111
                               //for 2222
                               //for 3333cc
        }
        printf("\n");
    }
    return 0;
}