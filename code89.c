//Count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            ;
        else
            special++;
        i++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d\n", spaces, digits, special);
    return 0;
}
