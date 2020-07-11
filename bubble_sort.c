/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


    void bubblesort(int arr[],int size)
    {
        for(int step=0;step<size-1;step++)
        {
            for(int i=0;i<size-step-1;i++)
            {
                if(arr[i]>arr[i+1])
                    {
                        int temp = arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp;
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
    }
    int main()
    {
    int data[]= {3,6,8,4,6,2};
    int size = sizeof(data)/sizeof(data[4]);
    bubblesort(data,size);
    printarray(data,size);
    }
