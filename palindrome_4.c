#include <stdio.h>

int main() {
    int n,rev=0,rem,temp;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp/10;
    }

    if (n == rev) {
        printf("%d is a palindrome number\n", n);
    }
    else {
        printf("%d is not a palindrome number\n", n);
    }

    return 0;
}
