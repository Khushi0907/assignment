#include <stdio.h>
int main() {

    int i, n, j, fact, sum=0, num;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 to %d are: ", n);
    for(i=1; i<=n; i++) {
        num = i;
        while(num > 0) {
            fact = 1;
            j = 1;

            while(j <= num % 10) {
                fact *= j;
                j++;
            }

            sum += fact;
            num /= 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
