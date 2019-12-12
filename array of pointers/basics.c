/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int *ptr [5];         // Array of pointers.
    
    int a =10;
    ptr[0] = &a;
    int arr[] = {1,2,3,4,5};
    ptr[1] = arr;
    
    printf("%d \n", *ptr[0]);
    
    printf("%d \n", *ptr[1]);
    
    return 0;
}
