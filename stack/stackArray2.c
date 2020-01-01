/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define stackSize 10
static int top;

int push(int arr[], int data);
int pop(int* arr);

int main()
{
    int stack[stackSize];
    
    push(stack, 10);
    push(stack, 7);
    push(stack, 6);
    
    printf("pop : %d \n",pop(stack));
    printf("pop : %d \n",pop(stack));
    printf("pop : %d \n",pop(stack));
    printf("pop : %d \n",pop(stack));

    return 0;
}

int push(int arr[], int data)
{
    if(top == stackSize)
    {
        printf("stack is full \n");
        return 0;
    }
    arr[top] = data;
    top++;
}

int pop(int arr[])
{
    if(top == 0 )
    {
        printf("stack is empty \n");
        return 0;
    }
    int data;
    top--;
    data = arr[top];
    return data;
}
