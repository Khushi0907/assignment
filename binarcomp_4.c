#include <stdio.h>
int main(){

    unsigned int num, ones_comp;

    printf("Enter a binary number: ");
    scanf("%u", &num);

    ones_comp = ~num;

    printf("The one's complement of %u is %u.\n", num, ones_comp);

    return 0;
}
