//WAP to remove consonants from a string
#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {

            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
    printf("After removing consonants: %s", str);

    return 0;
}