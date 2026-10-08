//WAP to find out length of a string without the help of any function 
#include<stdio.h>
int main () {
    char str[100];
    int i = 0;
    printf("enter string : ");
    scanf("%s", str);

    while(str[i]!= '\0'){
        i++;
    }

    printf("length of string : %d", i);

    return 0;
}