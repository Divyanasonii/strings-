//WAP to print vowel and consonants 
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {

            printf("%c is a vowel\n", str[i]);
        }
        else {
            printf("%c is consonant\n", str[i]);
        }
    }

    return 0;
}