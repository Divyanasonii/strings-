//WAP to take input of a string and print it using both scanf and fgets 
#include<stdio.h>
int main () {
    char str[10];     //9 characters and one null character 
    printf("enter string : ");
    scanf("%s", str);

    printf("your string is : %s", str);   //when using scanf() , dont put spaces while giving input 

    return 0;
}

//using fgets()

#include<stdio.h>
int main () {
    char str[10];
    printf("enter string : ");
    fgets(str, 10, stdin);

    printf("your string is : %s", str);

    return 0;
}