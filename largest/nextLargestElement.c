/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[] = {2,0,6,9,3,4};
    int flag;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size= %d  \n",size);
    
    for(int i=0; i<size;i++)
    {
        flag=0;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=1;
                printf("%d : Next higher element is : %d \n", arr[i],arr[j]);
                break;
            }
        }
        
        if(flag==0)
        {
            printf("%d has no higher elements in the array \n",arr[i]);
        }
    }

    return 0;
}
