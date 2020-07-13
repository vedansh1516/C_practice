#include <stdio.h>


    void insertionsort(int arr[],int size)
    {
        for(int step=0;step<size;step++)
        {
           int key = arr[step]; 
           int j = step-1;
           
           while(key<arr[j] && j>=0)
           {arr[j+1]=arr[j];
               j--;
           }
           arr[j+1]=key;
        }
    }
    void printarray(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
	printf("\n");
    }
    int main()
    {
    int data[]= {3,6,8,4,6,2};
    int size = sizeof(data)/sizeof(data[0]);
    insertionsort(data,size);
    printarray(data,size);
    }
