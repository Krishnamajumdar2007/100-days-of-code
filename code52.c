//Q52 (Nested Loops without Arrays/Strings)
#include <stdio.h>
int main() {
    int groups[] = {4, 5, 3, 1};
    int numGroups = 4;
    for (int i = 0; i < numGroups; i++) {
        for (int j = 1; j <= groups[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
