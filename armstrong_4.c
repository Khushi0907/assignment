#include<stdio.h>
int main(){

   int n,rem,total=0,temp;
   printf("enter the number=");
   scanf("%d",&n);

   temp=n;

   while(n>0){

      rem=n%10;
      total=total+(rem*rem*rem);
      n=n/10;
   }
   if(temp==total)
      printf("The number is Armstrong number");
   else
      printf("The number is not Armstrong number");

   return 0;
}
