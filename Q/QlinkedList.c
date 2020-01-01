/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* head,*tail= NULL;
void enQ(struct node** queue,int data);
void display(struct node* queue);
int deQ(struct node** queue);

int main()
{
    struct node* queue = NULL;
    enQ(&queue,7);
    enQ(&queue,8);
    display(queue);
    
    printf("pop : %d \n",deQ(&queue));
    printf("pop : %d \n",deQ(&queue));
    printf("pop : %d \n",deQ(&queue));
    return 0;
}
void enQ(struct node** queue,int  data)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
    if((*queue)==NULL)
    {
        (*queue)=tail=newnode;
    }
    tail->link=newnode;
    tail=newnode;
}

int deQ(struct node** queue)
{
    if((*queue)==NULL)
    {
        printf("queue is empty \n");
        return 0;
    }
    int data;
    data = (*queue)->data;
    (*queue)=(*queue)->link;
    return data;
}

void display(struct node* queue)
{
    while(queue!=NULL)
    {
        printf("%d \n",queue->data);
        queue=queue->link;
    }
}
