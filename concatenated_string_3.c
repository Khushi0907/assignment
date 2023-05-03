#include <stdio.h>
int main(){
     char str1[100], str2[100], finalstr[200];
     int i,j ;
     printf("Enter first string:");
     gets(str1);

     printf("Enter second string:");
     gets(str2);

     for(i=0; str1[i] != '\0'; i++){
          finalstr[i] = str1[i];
     }
     for(j=0; str2[j] != '\0'; j++){
          finalstr[i+j] = str2[j];
     }
     finalstr[i+j] = '\0';
     printf("The concatenated string: %s", finalstr);

     return 0;
}
