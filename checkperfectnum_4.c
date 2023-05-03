#include <stdio.h>
int main(){

    int i,n,j,sum=0;

    printf("Enter the number upto which you want to check perfect number: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 to %d: \n", n);

    for(i=1; i<=n; i++)
    {

        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }

        if(sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
