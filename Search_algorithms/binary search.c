
#include <stdio.h>

int binary_search(int arr[], int size, int key);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int pos,key = 8 ; 
    int size = sizeof(arr)/sizeof(arr[0]);
    //printf("size of arr : %d ", size);
    
    pos = binary_search( arr , (size-1) ,key);
    
    printf("pos : %d ",pos);

    return 0;
}

int binary_search(int arr[], int size, int key)
{
    int min =0 ,max=size, mid ;
    
    while(min < max)
    {
        mid = (min+max)/2 ; 
        
        if(arr[mid] < key)
        {
            min = mid+1;
        }
        else
        {
            max=mid;
        }
    }
    return min;
}
