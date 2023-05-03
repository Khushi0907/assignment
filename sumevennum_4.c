#include <stdio.h>

int main() {
    int i = 1,n,sum=0;

    printf("Even numbers between 1 to 100:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum = sum+i;
        }
    }

    printf("Sum of all even numbers between 1 to %d : %d\n", n, sum);

    return 0;
}
