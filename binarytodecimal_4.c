#include <stdio.h>

int main()
{
    long binary, decimal = 0;
    int rem, position = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary != 0)      // converting binary to decimal
    {
        rem = binary % 10;
        decimal += rem * position;
        position *= 2;
        binary /= 10;
    }

    printf("Decimal equivalent: %ld\n", decimal);
    return 0;
}
