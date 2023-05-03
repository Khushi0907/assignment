#include <stdio.h>
int main(){

    int decimal, rem, i=1, octal=0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        rem = decimal % 8;
        decimal /= 8;
        octal += rem * i;
        i *= 10;
    }

    printf("Octal equivalent: %d", octal);
    return 0;
}
