#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    
    printf("enter string");

    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c\n",str[i]);
        i++;
    }
    puts(str);
    return 0;

        
}