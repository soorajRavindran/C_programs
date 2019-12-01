/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[] = {2,0,6,9,3,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int l = arr[0];
    int i;
    int second =0;
    
    for(i=0;i<size;i++)
    {
        if(l<=arr[i] )
        {
            if(second<=l)
            {
                second = l;
            }
            l=arr[i];
        }
        else
        {
            if(second<arr[i])
            {
                second=arr[i];
            }
        }
    }
    printf("Largest = %d, second = %d",l, second);
    return 0;
}
