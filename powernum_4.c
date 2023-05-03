#include<stdio.h>
 int main(){

     int base, exponent, i;
     long power=1;

     printf("Enter Base:");
     scanf("%d", &base);
     printf("Enter Exponent:");
     scanf("%d", &exponent);

     for(i=1;i<=exponent;i++)
     {
         power=power*base;
     }

     printf("Final Output = %ld\n",power);

     return 0;
 }
