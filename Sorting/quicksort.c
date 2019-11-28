/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void quickSort(int arr[],int start,int end);
int partition(int arr[], int start, int end);
void swap(int* a, int* b);

int main()
{
    int arr[]={8,7,2,3,5,6,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("\n size of array : %d", size);
    
    quickSort(arr, 0, (size-1));

    return 0;
}

void quickSort(int arr[],int start,int end)
{
    int pIndex = 0;
    
    /*if(start >= end)
    {
        return
    }*/
    
    if ( start < end)
    {
        pIndex = partition(arr, start, end);
        quickSort(arr,start,pIndex);
        quickSort(arr, (pIndex+1), end);
    }
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pIndex = 0;
    for (int i=0; i < end; i++)
    {
        if(arr[i]<=arr[pivot])
        {
            swap(&arr[i],&arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[pIndex],&arr[pivot]);
    return pIndex;
}

void swap (int* a, int* b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
