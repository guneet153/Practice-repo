//Reverse each word in a sentence without changing the word order.
#include<stdio.h>
#include<string.h>
int main()
{
    /* char str[200];
    printf("enter a string: ");
    gets(str);

    int start = 0, end = 0, len = strlen(str);

    while (end <= len) {
        if (str[end] == ' ' || str[end] == '\0') {
            // Reverse the word from start to end-1
            int i = start, j = end - 1;
            while (i < j) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }
            start = end + 1; // Move to the next word
        }
        end++;
    } */

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
    size++;
    printf("String with each word reversed: %s\n", str);
    return 0;
}