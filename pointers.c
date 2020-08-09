int main()
{
    int i,n,sum = 0,*ptr;
    ptr = (int*) malloc(n * sizeof(int*));
    printf("enter number of elements:");
    scanf("%d",&n);
    if(n == NULL){
        printf("no memory allocated");
        exit(0);
    }
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d", ptr+i);
       
    }
    for(i=0;i<n;i++)
    {
        if(ptr[0]<ptr[i])
        {ptr[0]=ptr[i];}   
    }
    
    printf("biggest is %d",ptr[0]);
    free(ptr);
    return 0;
}
