#include <stdio.h>
int main(){

    int num, ones_Comp = 0, twos_Comp = 0;
    int mask = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (mask <= num) {             // calculate ones complement
        ones_Comp |= (num & mask) ? 0 : mask;
        mask <<= 1;
    }

    twos_Comp = ones_Comp + 1;           // calculate two's complement

    printf("The two's complement of %d is %d", num, twos_Comp);

    return 0;
}
