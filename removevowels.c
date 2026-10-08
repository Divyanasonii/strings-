//WAP to remove vowels from a string 
#include<stdio.h>
int main () {
       char str[100];
       printf("enter string : ");
       fgets(str,100,stdin);

    int j = 0;

for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
        str[i] != 'o' && str[i] != 'u') {

        str[j] = str[i];
        j++;
    }
}

str[j] = '\0';


printf("after removal of vowels : %s", str);

return 0;
}