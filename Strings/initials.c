//Print the initials of a name.
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter your full name: ");
    gets(name);

    int i = 0;
    // Print the first initial
    if (name[i] != ' ') {
        printf("%c. ", name[i]);
    }

    // Traverse the string to find initials after spaces
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
