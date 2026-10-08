//WAP to concatenate two strings
#include<stdio.h>
int main () {
    char str1[100], str2[100];
    printf("enter first string : ");
    scanf("%s", str1);

    printf("enter second string : ");
    scanf("%s", str2);         //using fgets will make the input go in next line because it also counts "enter" as a character

    int i = 0;
    int j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string: %s", str1);

    return 0;
}
