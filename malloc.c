#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i,n,sum=0;
    printf("enter number of elements \n");
    scanf("%d",&n);
    ptr=(int*)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("no memory allocated\n");
        exit(0);
    }
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum is %d",sum);
}
