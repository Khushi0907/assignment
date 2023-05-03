#include <stdio.h>
int main(){
     char str[100], ch;
     int i, pos=-1;

     printf("Enter a string:");
     gets(str);

     printf("Enter a character to find:");
     scanf("%c", &ch);

     for(i=0; str[i] !='\0'; i++){
          if(str[i] == ch){
              pos=i;
          }
      }
      if(pos == -1){
           printf("%c not found in string.\n", ch);
      }
      else{
           printf("%c found at position %d.\n", ch, pos);
      }
      return 0;
}
