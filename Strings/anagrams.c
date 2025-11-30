#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int freq[256] = {0}; // Frequency array for all ASCII characters
    int i = 0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    // Count frequency of each character in str1
    while (str1[i] != '\0') {
        freq[(unsigned char)str1[i]]++;
        i++;
    }

    // Decrease frequency based on characters in str2
    i = 0;
    while (str2[i] != '\0') {
        freq[(unsigned char)str2[i]]--;
        i++;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}