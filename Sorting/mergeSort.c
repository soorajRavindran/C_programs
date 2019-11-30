/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void mergeSort(int arr[],int l, int r);
void merge(int arr[], int l, int mid, int r);
void printArray(int arr[], int size);


int main()
{
    int arr[]={8,1,2,9,0,4,7,6};
    int size = sizeof(arr)/sizeof(arr[0]); // Size of the array
    mergeSort(arr,0,(size-1));
    printf("\n Sorted!!!");
    printArray(arr,size);

    return 0;
}

void mergeSort(int arr[],int l, int r)
{
    
    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,(mid+1),r);
        merge(arr,l,mid,r);
    }
}

void merge(int arr[], int l,int mid, int r)                   
{
    int i,j,k;
    
    // 1. creating two temporary array .For ex. Consider an array of size 8. Mid will 3 (arr[3]).each side of array
    // will be having array size as 4. left array size = mid (3) - low (0) + 1 = 4.
    // similarly right array size will be = right(7) - mid(3) = 4.
    
    int nL= mid-l+1; 
    int rL= r-mid;
    
    int leftArray[nL],rightArray[rL];
    
    //2. Copy the contents from the main array.Copy the lsft side elements to the newly created temp arrays.
    // left array  =  low  to mid.
    // Right array =  mid +1 to right.
    
    for(i=0; i<nL;i++)
    {
        leftArray[i]=arr[l+i];
    }
    for(j=0;j<rL;j++)
    {
        rightArray[j]=arr[mid+1+j];
    }
    
    i=0;
    j=0;
    k=l;
  //3. Sort and merge
    
    while(i<nL && j<rL)
    {
        if(leftArray[i]<=rightArray[j])
        {
            arr[k]=leftArray[i];
            i++;
        }
        else
        {
            arr[k]=rightArray[j];
            j++;
        }
        k++;
    }
    
    while(i<nL)
    {
        arr[k]=leftArray[i];
        i++;
        k++;
    }
    
    while(j<rL)
    {
        arr[k]=rightArray[j];
        j++;
        k++;
    }
}

void printArray(int arr[], int size)
{
    int i;
    
    for(i=0; i<size;i++)
    {
        printf("\n %d",arr[i]);
    }
}
