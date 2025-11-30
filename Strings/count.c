//to count spaces digits and special characters in string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0;
    int spaceCount=0;
    int digitCount=0;
    int specialCharCount=0;

    printf("enter a string");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            spaceCount++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digitCount++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            //do nothing for alphabets
        }
        else
        {
            specialCharCount++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaceCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of special characters: %d\n", specialCharCount);

    return 0;
}