//Check if two strings are anagrams of each other.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    printf("String after removing vowels: %s\n", str);
    return 0;
}
