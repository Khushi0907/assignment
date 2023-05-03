#include <stdio.h>
int main(){
     char str[100];
     int i, j, len=0;
     char temp;

     printf("Enter a string:");
     scanf("%s", str);
     while (str[len] !='\0'){
         len++;
     }
     j=len-1;
     for(i=0; i<j; i++, j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
     }
     printf("Reversed string:%s\n", str);

     return 0;
}
