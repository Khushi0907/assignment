#include <stdio.h>
int main() {

    int octal, decimal = 0, base = 1;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * base;
        base *= 8;
        octal /= 10;
    }

    printf("Decimal number: %d", decimal);

    return 0;
}
