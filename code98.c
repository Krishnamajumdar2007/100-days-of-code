//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, k, len;
    printf("Enter a string: ");
    gets(str);
    len = 0;
    while (str[len] != '\0') len++;

    printf("All substrings of the string:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
