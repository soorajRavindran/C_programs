/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


struct Q 
{
    int head,tail;
    int capacity;
    int* array;
};

struct Q* createQ(int capacity)
{
    struct Q* q = (struct Q*)malloc(sizeof(struct Q));
    q->tail=0;
    q->head=0;
    q->capacity=capacity;
    q->array = (int*)malloc(sizeof(capacity * sizeof(int)));
    return q;
}

int isQEmpty(struct Q* q)
{
    if(q->tail == q->head)
    {
        printf("Q is empty \n");
        return 0;
    }
}

int isQFull(struct Q* q)
{
    if(q->tail==q->capacity)
    {
        printf("q is full \n");
        return 1;
    }
}

void enQ(struct Q* q, int data)
{
    q->array[q->tail]=data;
    q->tail++;
}

int deQ(struct Q* q)
{
    int data;
    data = q->array[q->head];
    q->head++;
    return data;
    
}

int main()
{
    //printf("Hello World");
    
    struct Q* q = createQ(10);
    enQ(q, 1);
    enQ(q, 2);
    enQ(q, 5);
    
    //printf("pos :%d \n", stack->top);
    printf("pop :%d \n", deQ(q));
   // printf("pos :%d \n", stack->top);
    printf("pop :%d \n", deQ(q));
    //printf("pos :%d \n", stack->top);
    printf("pop :%d \n", deQ(q));
    
    enQ(q, 10);
    enQ(q, 7);
    
    printf("pop :%d \n", deQ(q));
    printf("pop :%d \n", deQ(q));
    

    return 0;
}
