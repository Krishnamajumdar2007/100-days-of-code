//Toggle case of each character in a string.
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    char firstRepeat = '\0';
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                firstRepeat = ch;
                break;
            }
        }
        i++;
    }
    if (firstRepeat != '\0')
        printf("First repeating lowercase character: %c\n", firstRepeat);
    else
        printf("No repeating lowercase character found.\n");
    return 0;
}
