#include <stdio.h>
int main(){
      char str1[100], str2[100];
      int i, temp = 0;

      printf("Enter first string: ");
      gets(str1);

      printf("Enter second string: ");
      gets(str2);

      for(i=0; str1[i] != '\0' || str2[i] != '\0'; i++){
            if(str1[i] != str2[i]){
                 temp = 1;
                 break;
       }
}

       if(temp == 0 && str1[i] == '\0' && str2[i] == '\0'){
             printf("The strings are equal.");
       }
       else{
             printf("The strings are not equal.");
       }

       return 0;
}
