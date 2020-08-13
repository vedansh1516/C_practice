#include <stdio.h>
int main()
{
printf("enter a number: ");
int n,rem,sum=0;
scanf("%d",&n);
for(int i=1;i<n;i++)
{
  rem=n%i;
  if(rem==0)
    sum=sum+i;
}
if(sum==n)
  printf("number %d is a perfect number",n);
else
  printf("number %d is not a perfect number",n);
  return 0;
}
