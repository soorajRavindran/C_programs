/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_NODES 5

struct node
{
    int data;
    struct node* link;
};

struct node* head = NULL;

void printList();
struct node* createNodeAtEnd(int data);

int main()
{
    int i;

    for(i=0; i < NUMBER_OF_NODES; i++)
    {
      head=createNodeAtEnd(i);
    }
    
    printList();

    return 0;
}

struct node* createNodeAtEnd(int data)
{
    struct node* p;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    p=head;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp;
    return head;
}

void printList()
{
    struct node* p = head;
    if(p==NULL)
    {
        printf("List is empty \n");
    }
    printf("Value at each node :");
    while(p!=NULL)
    {
        printf("%d \t", p->data);
        p=p->link;
    }
}
