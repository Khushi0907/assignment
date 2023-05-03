#include <stdio.h>
int main(){
    char str[100];
    int i, j, len=0, temp=1;

    printf("Enter a string:");
    scanf("%s", str);
    while(str[len] != '\0'){
        len++;
    }
    j=len-1;
    for(i=0;i<j;i++,j--){
        if(str[i] != str[j]){
            temp=0;
            break;
        }
    }
    if(temp){
          printf("%s is a palindrome.\n", str);
    }
    else{
          printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
