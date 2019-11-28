/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void quickSort(int arr[],int start,int end);
int partition(int arr[], int start, int end);
void swap(int* a, int* b);
void printArray(int arr[], int size);

int main()
{
    int arr[]={8,7,2,3,5,6,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    quickSort(arr, 0, (size-1));
    
    printArray(arr,(size-1));

    return 0;
}

void quickSort(int arr[],int start,int end)
{
    int pIndex = 0;
    
    if ( start < end)
    {
        pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, (pIndex+1), end);
    }
}

/* 
   1. We will take thelast element as pivot.
   2. We have to arrange isn a such a way that all the elements left to the pivot should be less than pivot.
     All the right elements in the array right to the pivot should be greate than pivot.
     
   3 @ return : pivot index. 
*/
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pIndex = start;
    for (int i=start; i < end; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(&arr[i],&arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[pIndex],&pivot);
    return pIndex;
}

void swap (int* a, int* b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}

void printArray(int arr[], int size)
{
    int i;
    for(i=0; i<=size; i++)
    {
        printf("%d \t",arr[i]);
    }
}
