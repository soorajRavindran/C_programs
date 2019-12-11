/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int arr[3][2]={ {10,20}, {30,40},{50,60} };
    
    int (*p)[2] = arr;
    
    //printf("%d \n", arr[0][1]);
    
    printf("%p %p \n", arr, arr+1); //arr   => points to the 0th 1-D array 
                                    //arr+1 => points to the 1st 1-D array.
                                    // arr + i  Points to ith element of arr.
                                    
    printf("%p %p \n", (*arr), *(arr+1)); // The expression *(arr + i) gives us the base address of ith 1-D array.
    
    //The base type of (arr + i) is ‘an array of 2 units’ while the base type of *(arr + i) or arr[i] is int.
    
    // arr    => Points to the 0th element of array
    // arr+i  => Points to the 'i'th element in the array.
    // (*arr) => Points to the 0th element of 0th element of array.
    // *(*arr)=> Represent the value of arr[0][0].
    // *(*(arr+i)+j)  => Represents the jth element of 'i'th element.
    
    for (int i=0; i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d \t", *(*(arr+i)+j));
        }
    }
}
