/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define size 5;

int (*ptr)[5] func();

int main()
{
    int (*ptr)[5] = func();
    printf("%d", *(*ptr));

}

int (*ptr)[5] func()
{
   int arr[5]={1,2,3,4,5};
   return &arr;
}
