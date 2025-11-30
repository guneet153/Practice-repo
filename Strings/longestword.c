
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],largeword[50];
    int c=0 , max=0, i , j, index=0,l;
    printf("enter a string: ");
    gets(str);
    l=strlen(str);
    //finding lenght of longest word and starting index
    for(i=0;i<=l;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            c++;
        }
        else
        {
            if(c>max)
            {
                max=c;
                index=i - c;
            }
            c=0;
        }
    }
    //extracting the longest word using starting index and length
    for(j=0;j<max;j++)
    {
        largeword[j]=str[index + j];
    }
    largeword[j]='\0';
    printf("the longest word is: %s",largeword);
    return 0;
}
