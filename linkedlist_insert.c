#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

struct node * insertAfter(int data,int val)
{
    struct node *newnode;
    struct node *temp=head;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data you wanna inserts: ");
    scanf("%d",&data);
    printf("Enter the value from ll you wanna insert after: ");
    scanf("%d",&val);
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    newnode->data=data;
    newnode->next=temp->next;
    temp->next=newnode;
};

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
            temp=newnode;
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

int main()
{   int n,data,val;
    head=malloc(sizeof(struct node));

    struct node *newnode;
    nodeList(n);
    insertAfter(data,val);
    display(head);
    return 0;
}
