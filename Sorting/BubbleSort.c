/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void bubblesort(int arr[], int size);
void swap (int* a, int* b);
void printArray(int arr[], int size);

int main()
{
    int arr[]={8,1,2,9,4,0,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, (size-1));
    printArray(arr, (size-1));
    return 0;
}


void bubblesort(int arr[], int size)
{
    int i , j;
    
    for(i=0; i < size; i++)
    {
        for(j=0;j<(size-i);j++)     // After each j loop we will get the highest element in last.So for the next j loop, no need to include all 
        {                           // the all elements. so j condition will be like  j < (size-1)
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j+1],&arr[j]);
            }
        }
    }
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
