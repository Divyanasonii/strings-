//WAP to count frequency of a given character in a string 
#include<stdio.h>
int main () {
    char str[100];
    printf("enter string : ");
    fgets(str,100,stdin);

    char ch;
    printf("enter character to find : ");
    scanf(" %c", &ch);

    int count = 0;


    for(int i = 0; str[i]!= '\0'; i++){
        if(str[i]== ch){
            count++;
        }
    }

    printf("%c occurs %d times", ch, count);

    return 0;
}