#include <stdio.h>
int main(){
     char str[100];
     int i, count=1;

     printf("Enter a string:");
     gets(str);

     for(i=0; str[i] !='\0'; i++){
          if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
          {
             count++;
          }
     }

     printf("Total Words: %d\n", count);

     return 0;
}
