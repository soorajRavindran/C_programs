/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define QSize 3

int head,tail;

int enQ(int arr[], int data);
int deQ(int arr[]);

int main()
{
    int Q[QSize];
    
    enQ(Q, 10);
    enQ(Q, 7);
    enQ(Q, 6);
    
    
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    //printf("deQ : %d \n",deQ(Q));
    enQ(Q, 12);
    enQ(Q, 13);
    
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));

    return 0;
}

int enQ(int arr[], int data)
{
    if(head==(tail+1))
    {
        printf("Q is full \n");
        return 0;
    }
    
    if(tail == QSize)
    {
        tail=0;
    }
    arr[tail] = data;
    tail++;
}

int deQ(int arr[])
{
    if(head == tail)
    {
        printf("Q is empty \n");
        return 0;
    }
    
    if(head == QSize)
    {
        head=0;
    }
    
    int data;
    data = arr[head];
    head++;
    return data;
}

