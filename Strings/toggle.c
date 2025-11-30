//toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    
    printf("enter string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
        i++;
    }

    puts("Toggled case string is:");
    puts(str);
    return 0;
}

