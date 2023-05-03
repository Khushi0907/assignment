#include <stdio.h>
int main(){

    long int hex, quotient, rem, binary= 0, base = 1;
    int i = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%lX", &hex);  // read hexadecimal input as a long integer

    quotient = hex;

    // convert to binary by dividing the hexadecimal number by 2
    while (quotient != 0) {
        rem = quotient % 2;
        binary += rem * base;
        quotient /= 2;
        base *= 10;
    }

    printf("The binary equivalent of 0x%lX is %ld\n", hex, binary);

    return 0;
}
