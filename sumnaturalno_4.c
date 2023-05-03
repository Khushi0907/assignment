#include <stdio.h>

int main() {
    int i = 1,n,sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum+i;
    }

    printf("Sum of all natural numbers between 1 to %d : %d\n", n, sum);

    return 0;
}
