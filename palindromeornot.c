//WAP to check if a string is palindrome or not 
#include<stdio.h>
int main () {
    char str[100];
    printf("enter a string : ");
    scanf("%s", str);

    int length = 0;
    int i = 0;
    int flag = 1;

    while(str[i] != '\0'){
        length++;
        i++;
    }

    for(i = 0; str[i]!= '\0'; i++){
      if(str[i] != str[length - 1 - i]){
              flag = 0;
              break;
        }
    }
    if (flag == 1){
        printf("palindrome string");
    }
    else {
        printf("not a palindrome string");
    }

    return 0;
}