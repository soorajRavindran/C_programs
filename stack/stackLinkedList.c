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

void push(struct node** stack,int data);
void display(struct node* stack);
int pop(struct node** stack);

int main()
{
    struct node* stack = NULL;
    push(&stack,7);
    push(&stack,8);
    display(stack);
    
    printf("pop : %d \n",pop(&stack));
    printf("pop : %d \n",pop(&stack));
    printf("pop : %d \n",pop(&stack));
    return 0;
}
void push(struct node** stack,int  data)
{
    struct node* newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    temp=(*stack);
    newnode->link=temp;
    (*stack)=newnode;
}

int pop(struct node** stack)
{
    if((*stack)==NULL)
    {
        printf("stack is empty \n");
        return 0;
    }
    int data;
    data = (*stack)->data;
    (*stack)=(*stack)->link;
    return data;
}

void display(struct node* stack)
{
    while(stack!=NULL)
    {
        printf("%d \n",stack->data);
        stack=stack->link;
    }
}
