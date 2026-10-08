//WAP to remove duplicate characters from a string
#include<stdio.h>
int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int duplicate = 0;
        for (int k = 0; k < j; k++) {
            if (str[i] == str[k]) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
    printf("After removing duplicates: %s", str);

    return 0;
}