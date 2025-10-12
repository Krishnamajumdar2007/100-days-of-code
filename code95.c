//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    if (len1 != len2) {
        printf("Second string is not a rotation of first.\n");
        return 0;
    }
    char temp[200];
    int i, j = 0;
    for (i = 0; i < len1; i++) temp[j++] = str1[i];
    for (i = 0; i < len1; i++) temp[j++] = str1[i];
    temp[j] = '\0';
    int found = 0;
    for (i = 0; i <= 2*len1 - len2; i++) {
        int k;
        for (k = 0; k < len2; k++) {
            if (temp[i + k] != str2[k]) break;
        }
        if (k == len2) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Second string is a rotation of first.\n");
    else
        printf("Second string is not a rotation of first.\n");
    return 0;
}
