#include <stdio.h>
int main(){

   long binary, hexadecimal = 0;
   int i=1, rem;

   printf("Enter the binary number: ");
   scanf("%ld", &binary);

   while (binary != 0){
      rem = binary % 10;
      hexadecimal = hexadecimal + rem * i;
      i = i * 2;
      binary = binary / 10;
   }
   printf("Equivalent hexadecimal value: %lX", hexadecimal);
   return 0;
}
