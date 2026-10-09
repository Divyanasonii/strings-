#include <stdio.h>
int main() {
    char str[100];
    int i, count = 1;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' &&
            str[i + 1] != '\n' && str[i + 1] != '\0') {
            count++;
        }
    }

    printf("Words = %d", count);

    return 0;
}