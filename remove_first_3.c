#include <stdio.h>
int main() {
    char str[100], ch;
    int i, j;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter a character to remove: ");
    scanf("%c", &ch);


    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {

            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j+1];
            }
            break;
        }
    }

    if (str[i] == '\0') {
        printf("Character not found in the string.\n");
    }
    else {
        printf("Updated string: %s\n", str);
    }

    return 0;
}







