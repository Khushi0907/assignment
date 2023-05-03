#include <stdio.h>

int main() {
   char str[100];
   int i, vowels=0, consonants=0;

   printf("Enter an string: ");
   scanf("%s", str);

   for(i=0;str[i];i++){

     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
      str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
   } else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            consonants++;
   }
}

    printf("The number of vowels: %d\n", vowels);
    printf("The number of consonants: %d\n", consonants);
    return 0;
}
