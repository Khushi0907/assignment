#include <stdio.h>

int main() {
    int n,digit,product = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        product *= digit;
        n = n/10;
    }

    printf("The product of digits of the number : %d\n", product);

    return 0;
}
