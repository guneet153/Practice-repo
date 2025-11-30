#include<Stdio.h>
#include<string.h>
int main()
{
   char str[100];
    printf("enter string");
    gets(str);
    int count;
    count=0;
    while(str[count]!='\0')
    {
        count++;
    }
    puts(str);
    printf("the number of characters in the string is %d",count); 

    
/*
    char str[100];
    printf("enter string");
    gets(str);
    int count=0;
     int k=0;
    while(str[k]!='\0')
    {
        count++;
        k++;
    }
    puts(str);
    printf("the number of characters in the string is %d",count);
    */

    return 0;

}