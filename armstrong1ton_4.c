#include <stdio.h>
int main(){

    int i, n, num, digit, sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 to %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        num = i;

        while(num != 0)
        {
            digit = num % 10;
            sum += (digit*digit*digit);
            num /= 10;
        }

        if(i == sum)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
