#include<stdio.h>
#include<stdio.h>
int main()
{
    int n;
    printf("enter number ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int a=1;
        for(int j = 1; j <= i; j++)
        {
            int d=a+64;  //ascii value of A=65
            char ch=d;  //type casting
            printf("%c", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}

