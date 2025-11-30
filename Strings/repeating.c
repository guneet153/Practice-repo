//find the first repeating lowercase alphabet in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    int i = 0;

    printf("enter a string: ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z') // Check for lowercase letters
        {
            freq[str[i] - 'a']++; // Increment frequency count
            if (freq[str[i] - 'a'] == 2) // Check if it's the first repeat
            {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0; 
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}