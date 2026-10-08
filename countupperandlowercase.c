//WAP to count upper and lowercase alphabets 
#include<stdio.h>
int main() {
    char str[100];
    int upperCase = 0;
    int lowerCase = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]>= 'A' && str[i]<= 'Z') {

          upperCase++;
        }
        else{
            lowerCase++;
        }
    }
    printf("Uppercase alphabets : %d\n", upperCase);
    printf("Lowercase alphabets ; %d", lowerCase);

    return 0;
}