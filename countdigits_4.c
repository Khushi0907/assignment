#include <stdio.h>

int main() {
    int n,count=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0) {
        count++;
        n = n/10;       //to eliminate last digit from the number
    }

    printf("Number of digits in the given number is %d\n", count);

    return 0;
}
