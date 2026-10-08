//WAP to find out if a character is an uppercase or lowercase alphabet
#include<stdio.h>
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]>= 'A' && str[i]<= 'Z') {

            printf("Uppercase alphabet");
        }
        else if(str[i]>= 'a' && str[i]<= 'z'){
            printf("Lowercse alphabet");
        }
        else {
            printf("other characters");
        }
    }

    return 0;
}