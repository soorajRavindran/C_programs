/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


struct Stack 
{
    int top;
    int capacity;
    int* array;
};

struct Stack* createStack(int capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top=0;
    stack->capacity=capacity;
    stack->array = (int*)malloc(sizeof(capacity * sizeof(int)));
    return stack;
}

int isStackEmpty(struct Stack* stack)
{
    if(stack->top == 0)
    {
        printf("stack is empty \n");
        return 0;
    }
}

int isStackFull(struct Stack* stack)
{
    if(stack->top==stack->capacity)
    {
        printf("stack is full \n");
        return 1;
    }
}

void push(struct Stack* stack, int data)
{
    stack->array[stack->top]=data;
    stack->top++;
}

int pop(struct Stack* stack)
{
    int data;
    stack->top--;
    data = stack->array[stack->top];
    return data;
    
}

int main()
{
    //printf("Hello World");
    
    struct Stack* stack = createStack(10);
    push(stack, 1);
    push(stack, 2);
    push(stack, 5);
    
    //printf("pos :%d \n", stack->top);
    printf("pop :%d \n", pop(stack));
   // printf("pos :%d \n", stack->top);
    printf("pop :%d \n", pop(stack));
    //printf("pos :%d \n", stack->top);
    printf("pop :%d \n", pop(stack));
    
    push(stack, 10);
    push(stack, 7);
    
    printf("pop :%d \n", pop(stack));
    printf("pop :%d \n", pop(stack));
    

    return 0;
}
