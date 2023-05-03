#include <stdio.h>

int main() {
    int n, first, last, sum=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    last = n%10;       // to find the last digit

    while (n >= 10)          // to find the first digit
    {
        n = n/10;
    }
    first = n;
    sum = first + last;
    printf("First digit of the given number is %d\n", first);
    printf("Last digit of the given number is %d\n", last);
    printf("Sum of first and last digit of the given number : %d\n", sum);

    return 0;
}
