/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_NODES 5

void printList();
void createNode(int i);
struct
{
    int data;
    struct node* link;
}node;

struct node* start = NULL;

int main()
{
    int i;
    for(i=0; i < NUMBER_OF_NODES; i++)
    {
        createNode(i);
    }
    
    printList();
    printf("Hello World");

    return 0;
}

void printList()
{
    struct node* p =start;
    while( p->link!=NULL )
    {
        printf("Values : %d", p->data);
        p=p->link;
    }
}

void createNode(int i)
{
    struct node* p;
    struct node *temp = (struct node*)malloc(struct node*);
    temp->data=i;
    temp->link=NULL;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp;
}
