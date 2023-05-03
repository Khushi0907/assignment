#include <stdio.h>
int main(){
     char str[100];
     int i;

     printf("Enter a string in uppercase:");
     gets(str);

     for(i=0; str[i]; i++){
          if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] += (32 - 'A');
    }
}
      printf("The string in lowercase: %s", str);

      return 0;
}
