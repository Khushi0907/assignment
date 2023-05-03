#include <stdio.h>

int main() {

    int num, temp, rem, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp) {
        fact = 1;
        rem = temp % 10;
        for(int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if(sum == num) {
        printf("%d is a strong number.\n", num);
    }
    else {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}
