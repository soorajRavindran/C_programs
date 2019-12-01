/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[] = {3,0,2,9,6,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int l = arr[0];
    int i;
    
    for(i=0;i<size;i++)
    {
        if(l<=arr[i])
        {
            l = arr[i];
        }
    }
    printf("Largest = %d",l);
    return 0;
}
