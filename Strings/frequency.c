//Count frequency of a given character in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char ch;
    int i=0;
    int freq=0;

    printf("enter a string: ");
    gets(str);

    printf("enter character to find frequency: ");
    scanf("%c",&ch);

    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            freq++;
        }
        i++;
    }

    printf("Frequency of %c: %d\n", ch, freq);

    return 0;
}