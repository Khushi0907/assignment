#include <stdio.h>
int main() {

    int n1, n2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;       // maximum number between n1 and n2 is stored in max

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
