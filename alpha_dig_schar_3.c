#include <stdio.h>
int main(){
     char str[100];
     int i, alphabets=0 , digits=0 , specialchars=0;

     printf("Enter a string:");
     gets(str);

     for(i=0; str[i]; i++){
       if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
           alphabets++;
       }
       else if(str[i] >= '0' && str[i] <='9'){
            digits++;
       }
       else{
            specialchars++;
       }
    }
      printf("Total alphabets:%d\n", alphabets);
      printf("Total Digits:%d\n", digits);
      printf("Total Special Characters:%d\n", specialchars);

      return 0;
}
