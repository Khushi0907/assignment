#include <stdio.h>

int main() {

    int i;
    for(i = 0; i <= 127; i++) {
        printf("ASCII value %d is %c\n", i, i);
    }

    return 0;
}
