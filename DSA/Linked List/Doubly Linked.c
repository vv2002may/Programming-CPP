#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int a;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;
struct node *create_node()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    return temp;
}
void insert_node()
{
    struct node *temp;
    temp=create_node();
    printf("Enter a value :");
    scanf("%d",&temp->a);
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
        head=tail=temp;
    else
    {
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}
void view_node()
{
    struct node *temp;
    temp=head;
    int p=1;
    while(temp!=NULL)
    {
        printf("%d. %d\n",p,temp->a);
        temp=temp->next;
        p++;
    }
}
void menu()
{
    while(1)
    {
        int p;
        printf("1.Insert\n2.View\n3.Exit\nEnter your choice : ");
        scanf("%d",&p);
        switch(p)
        {
            case 1:
            {
                insert_node();
                break;
            }
            case 2:
            {
                view_node();
                break;
            }
            case 3:
                exit(0);
        }
    }
}
int main()
{
    menu();
}
