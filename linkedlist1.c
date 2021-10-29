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

struct node * insertAtHead(int data)
{
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    if(head==NULL)
    {
        head=newnode;
    }
    newnode->data=data;
    newnode->next=head;
};
struct node *insertAtTail(int data)
{
    struct node *newnode;
    struct node *temp=head;
    newnode=malloc(sizeof(struct node));
    newnode->data=data;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->next=NULL;
    temp->next=newnode;
    //
};
int main()
{
    int n;
    head=malloc(sizeof(struct node));

    struct node *newnode;
    nodeList(n);
    head=insertAtHead(11);
    insertAtTail(22);
    display(head);
    return 0;
}
