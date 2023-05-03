#include <stdio.h>
int main(){
     char ch, str[100];
     int i, count=0;

     printf("Enter a string:");
     fgets(str, sizeof(str), stdin);

     printf("Enter a character to identify:");
     scanf("%c", &ch);

     for(i=0; str[i] !='\0'; i++){
         if(str[i] == ch){
              count++;
              printf("%c found at position %d\n", ch, i+1);
         }
      }
      if(count == 0){
        printf("%c not found in the string.\n", ch);
      }
      else{
        printf("%c occurs %d times in the string.\n", ch, count);
      }
      return 0;
}
