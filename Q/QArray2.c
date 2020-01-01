/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define QSize 10

int head,tail;

int enQ(int arr[], int data);
int deQ(int arr[]);

int main()
{
    int Q[QSize];
    
    enQ(Q, 10);
    enQ(Q, 7);
    enQ(Q, 6);
    enQ(Q, 5);
    enQ(Q, 3);
    enQ(Q, 4);
    enQ(Q, 2);
    enQ(Q, 66);
    enQ(Q, 12);
    enQ(Q, 99999);
    
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    printf("deQ : %d \n",deQ(Q));
    

    return 0;
}

int enQ(int arr[], int data)
{
    if(tail == (QSize-1))
    {
        printf("Q is full \n");
        return 0;
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
    int data;
    data = arr[head];
    head++;
    return data;
}
