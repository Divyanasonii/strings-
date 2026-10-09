#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, j, length1 = 0, length2 = 0, count = 0;
  
    printf("enter first string : ");
    scanf("%s", str1);
    printf("enter second string : ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
        length1++;

    for (i = 0; str2[i] != '\0'; i++)
        length2++;

    if (length1 != length2) {
        printf("Not Anagrams");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '0';
                count++;
                break;
            }
        }
    }

    if (count == length1)
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}