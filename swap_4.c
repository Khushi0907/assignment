#include <stdio.h>

int main() {
    int n, first, last, new, temp;

    printf("Enter the number: ");
    scanf("%d", &n);

    last= n%10;

    temp = n;
    while (temp >= 10) {
        temp = temp/10;
    }
    first = temp;

    new = last;          // swapping first and last digit
    temp = n/10;
    temp = temp * 10;
    new = new * 10;
    new += n % 10;
    new += temp;

    printf("The new number with first and last digits swapped : %d\n", new);

    return 0;
}
