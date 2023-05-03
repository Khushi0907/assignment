#include <stdio.h>
int main() {

    int n, first_num = 0, second_num = 1, next_num, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next_num = i;
        } else {
            next_num = first_num + second_num;
            first_num = second_num;
            second_num = next_num;
        }
        printf("%d ", next_num);
    }

    return 0;
}
