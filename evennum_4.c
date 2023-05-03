#include <stdio.h>

int main() {
    int i = 1;

    printf("Even numbers between 1 to 100:\n");

    while (i <= 100) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
