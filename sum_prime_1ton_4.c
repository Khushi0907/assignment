#include <stdio.h>
int main() {

    int i, j, n, temp, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 to %d : ", n);

    for(i = 2; i <= n; i++) {
        temp = 0;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                temp = 1;
                break;
            }
        }

        if(temp == 0)
            sum += i;
    }

    printf("Sum of all prime numbers between 1 to %d is %d", n, sum);

    return 0;
}
