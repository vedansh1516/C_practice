#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,s[100],s1[1000];
scanf("%c",&ch);
printf("%c\n", ch);
scanf("%s",&s);
printf("%s\n",s);
scanf(" %[^\n]%*s",&s);
printf("%s\n",s);




    return 0;
}

