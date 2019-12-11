/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[]={10,20,30};
    
    int (*ptr)[3] = &arr; // Pointer to an array of 3 integer elements.Since subscript have higher precedence than indirection, 
                          //it is necessary to enclose the indirection operator and pointer name inside parentheses
    
    int *p = arr;       // pointer to 0th element of array.name of array denotes the base address
    
    printf("%p, %p , %p , %d \n", ptr, p, *ptr, *p); //whenever a pointer to an array is dereferenced, we get the base address of the array to which it points
    
    p++;                // will point it to next element in the array.
    ptr++;              // the pointer ptr will be shifted forward by 12 bytes
    
    printf("%p, %p , %p , %d \n", ptr, p, *ptr, *p);
    
    printf("%lu, %lu \n", sizeof(*p), sizeof(*ptr));
    ptr--;
    
    printf("%d \n", *(*ptr));//whenever a pointer to an array is dereferenced, we get the base address of the array to which it points
                             // if we do dereference again, will get the 0th elemnt of the array.
}
