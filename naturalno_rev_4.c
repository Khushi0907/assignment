#include <stdio.h>

int main() {
    int i,n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Natural numbers from %d to 1:\n", n);

    i = n;
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    return 0;
}
