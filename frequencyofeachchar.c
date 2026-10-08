//WAP to count frequency of each character in a string
#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int already = 0;
        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                already = 1;
                break;
            }
        }
        if (already == 1)
            continue;

        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        printf("frequency of %c is  %d\n", str[i], count);
    }

    return 0;
}
   