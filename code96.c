//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);
    int start = 0, i = 0;
    printf("Sentence with reversed words:\n");
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            for (int j = end; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] == ' ')
                printf(" ");
            start = i + 1;
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    printf("\n");
    return 0;
}
