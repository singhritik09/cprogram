#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void nodeList(int n)
{
    struct node *newnode;
    struct node *temp;
    int userinput;
    int i;
    head=NULL;
    printf("Enter Number of nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=malloc(sizeof(struct node));
        printf("Enter data for node %d: ",i);
        scanf("%d",&userinput);
        if(head==NULL)
        {
            newnode->data=userinput;
            head=newnode;
            temp=head;
        }
        else
        {
            newnode->data=userinput;
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp->next=NULL;
}

void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void reverse()
{
    struct node *prevptr=NULL;
    struct node *currptr=head;
    struct node *nextptr;
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    head=prevptr;
}

void reverseK

int main()
{
    return 0;
}
