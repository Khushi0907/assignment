#include <stdio.h>
int main(){
    char str[100];
    int i;

    printf("Enter a string:");
    gets(str);

    for(i=0; str[i]; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= ('a' - 'A');
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += ('a' - 'A');
        }
}
     printf("The string with the toggle case: %s", str);

     return 0;
}
