#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n = n/10;
    }

    printf("The sum of digits of the number : %d\n", sum);

    return 0;
}
