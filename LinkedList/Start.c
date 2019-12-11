/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_NODES 5
#define KEY 8

struct node
{
    int data;
    struct node* link;
};

struct node* head = NULL;

void printList();
struct node* createNodeAtEnd(int data);
void addNodeAtbeg(int data);
void addInBetween(int data,int pos);
void search(int key);
void deleteNode(int pos);

int main()
{
    int i;

    for(i=0; i < NUMBER_OF_NODES; i++)
    {
      head=createNodeAtEnd(i);
    }
    
    printList();
    
    addNodeAtbeg(5);
    
    printList();
    
    search(KEY);
    
    addInBetween(6, 3);
    
    printList();
    
    deleteNode(8);
    
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

void addNodeAtbeg(int data)
{
    struct node* p;
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=head;
    head=temp;
}

void addInBetween(int data,int pos)
{
    int count =0;
    struct node* i;
    
    struct node* p=head;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    
    while(count!=(pos-1))
    {
        p=p->link;
        count++;
    }
    
    temp->data=data;
    i=p->link;
    p->link=temp;
    temp->link=i;
    
}

void deleteNode(int pos)
{
    struct node* p= head;
    int count=1;
    
    while(count!=(pos-1))
    {
        p=p->link;
        count++;
    }
    p->link=(p->link)->link;
}

void printList()
{
    struct node* p = head;
    if(p==NULL)
    {
        printf("List is empty \n");
    }
    printf("\n Value at each node :");
    while(p!=NULL)
    {
        printf("%d \t", p->data);
        p=p->link;
    }
}

void search(int key)
{
    struct node* p=head;
    while(p!=NULL)
    {
        if(p->data == key)
        {
            printf("\n Search key found");
            return 1;
        }
        p=p->link;
    }
    printf("\n Search key not found");
}
