#include <stdio.h>
int main() {

    char str[100], old_ch, new_ch;
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter the character to replace: ");
    scanf("%c", &old_ch);

    printf("Enter the replacement character: ");
    scanf(" %c", &new_ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == old_ch) {
            str[i] = new_ch;
            break;
        }
    }

    printf("Updated string: %s\n", str);

    return 0;
}
