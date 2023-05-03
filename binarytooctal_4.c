#include <stdio.h>
int main(){

    long binary, temp_Binary;
    int octal = 0, decimal = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp_Binary = binary;

    while (temp_Binary != 0)       // Convert binary to decimal
    {
        decimal += (temp_Binary % 10) * (1 << i);
        ++i;
        temp_Binary /= 10;
    }

    i = 1;

    while (decimal != 0)      // Convert decimal to octal
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    printf("The octal equivalent of %lld is %d", binary, octal);

    return 0;
}
