#include <stdio.h>
#include<string.h>

void palindrome(char str[]){
int l=0;
int h=strlen(str)-1;
while(h>l)
{
    if(str[l++] != str[h--]){
        printf("%s is not a palindrome ",str);
        return;
            }
}
printf("%s is a palindrome",str);
}
int main()
{
    char str[100];
  printf("enter a string: ");
  scanf("%s",&str);
  palindrome(str);

   
}
