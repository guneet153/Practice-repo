#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string");
    gets(str);
    int i=0;
    int vowels=0;
    int consonants=0;
    while(str[i]!='\0')
    {
        char ch=str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }
    printf("number of vowels=%d\n",vowels);
    printf("number of consonants=%d\n",consonants);
    return 0;
}