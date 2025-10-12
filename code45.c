//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    // Read input
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;

        // Calculate factorial of digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if (sum == original) {
        printf("Strong\n");
    } else {
        printf("Not Strong\n");
    }

    return 0;
}
