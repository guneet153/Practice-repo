//Print all sub-strings of a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string: ");
    gets(str);

    int len = strlen(str);
    printf("All substrings of the string are:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
 return 0;
}