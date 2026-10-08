//func - strcmp
//WAP to check whether two strings are equal or not 
#include <stdio.h>
int main() {
    char str1[100];
    char str2[100];
    int equal = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal == 1) {
        printf("Both strings are equal");
    } else {
        printf("Strings are not equal");
    }

    return 0;
}