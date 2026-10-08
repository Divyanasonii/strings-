//WAP to remove spaces from a string 
#include<stdio.h>
int main () {
      char str[100];
      printf("enter string : ");
      fgets(str,100,stdin);

      int j = 0;

      for(int i = 0; str[i]!= '\0'; i++){
        if(str[i] != ' '){
            str[j]= str[i];
            j++;
        }
      }
      str[j] = '\0';

      printf("final string : %s", str);

      return 0;
}