#include <stdio.h>

        void selectionsort(int arr[],int size)
    {
        for(int step=0;step<size-1;step++)
        {
            int min_idx= step;
            for(int i=step+1;i<size;i++)
            {
                if(arr[i]<arr[min_idx])
                    {
                        int temp = arr[i];
                        arr[i]=arr[min_idx];
                        arr[min_idx]=temp;
                    }
            }
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
    int data[]= {3,6,8,8,9,2};
    int size = sizeof(data)/sizeof(data[0]);
    selectionsort(data,size);
    printarray(data,size);
    }
