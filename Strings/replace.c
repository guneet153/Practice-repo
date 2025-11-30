// replace spaces with hyphens in string
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
        if(str[i]==' ')
        {
            str[i]='-';
        }
        i++;

    }
    printf("replaced string is %s",str);
    return 0;

}

/* #include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter string");
    gets(str);
    int i=0;
    while(str[i]==' ')
    {
        str[i]='*';
        i++;

    }
    printf("replaced string is %s",str);

}*/