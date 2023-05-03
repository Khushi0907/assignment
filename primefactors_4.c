#include <stdio.h>
int main() {

    int n, i, j, check;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);


    for(i = 2; i <= n; i++) {

        if(n % i == 0) {
            check = 1;

            for(j = 2; j <= i/2; j++) {
                if(i % j == 0) {
                    check = 0;
                    break;
                }
            }

            if(check == 1)
                printf("%d ", i);
        }
    }

    return 0;
}
