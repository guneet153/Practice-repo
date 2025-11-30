#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enetr a string");
    scanf("%s",str);
    puts("the reverse of string is");
    int size=0;
    int k=0;
    char original[100];
    
    while(str[k]!='\0')
    {
        size++;
        k++;

    }
    int i;
    int j;
    for( i=0 , j=size-1 ; i<j ; i++ , j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    strcpy(original,str);
    if(strcmp(original,str)==0)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    printf("%s",str);

    return 0;
}