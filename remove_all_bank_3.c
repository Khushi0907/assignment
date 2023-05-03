#include <stdio.h>
int main() {
    char str[100], new_str[100];
    int i, j = 0, temp = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            new_str[j] = str[i];
            j++;
        }
        else if (temp == 0) {
            new_str[j] = ' ';
            j++;
            temp = 1;
        }
    }

    new_str[j] = '\0';
    printf("String with extra spaces removed: %s\n", new_str);
    return 0;
}
