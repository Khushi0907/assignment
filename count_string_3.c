#include <stdio.h>
int main(){
     char str[100];
     int i, count=1;

     printf("Enter a string:");
     scanf("%s", str);

     for(i=0; str[i]; i++){
          if(str[i] == ' '){
             count++;
          }
    }

     printf("Total Words: %d\n", count);

     return 0;
}
