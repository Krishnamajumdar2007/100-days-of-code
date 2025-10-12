//Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    long long num;
    int freq[10] = {0}, digit, maxDigit = 0, maxFreq = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0)
        num = -num;
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;Reverse an array without taking extra space.

        }
    }
    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxFreq);
    return 0;
}
