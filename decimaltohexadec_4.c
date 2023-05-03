#include <stdio.h>
int main(){

    int decimal, rem, i = 0;
    char hex[20];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        rem = decimal % 16;
        if (rem < 10) {
            hex[i] = rem + 48;
        } else {
            hex[i] = rem + 55;
        }
        i++;
        decimal /= 16;
    }
    printf("Hexadecimal number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    return 0;
}
