#include "stdio.h"
#include "stdlib.h"
struct node 
{
    int a;
    struct node *link;
};
struct node *start=NULL;
struct node *create_node()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void insert_node()
{
    struct node *temp,*t;
    temp=create_node();
    printf("Enter a value : ");
    scanf("%d",&temp->a);
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}
void view_node()
{
    if(start==NULL)
        printf("List is empty.\n");
    else
    {
    struct node *temp;
    temp=start;
    int p=1;
    while(temp!=NULL)
    {
        printf("%d. %d\n",p,temp->a);
        temp=temp->link;
        p++;
    }
    }
}
void delete_node()
{
    if(start==NULL)
        printf("List is empty.\n");
    else
    {
    struct node *temp;
    temp=start;
    start=start->link;
    free(temp);
    }
}
void menu()
{
while(1)
{
    int p;
    printf("1. Insert\n2. View\n3. Delete\n4. Exit\nEnter your choice : ");
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
        {
            delete_node();
            break;
        }
        case 4:
            exit(0);
        default:
        {
            printf("Invalid Choice!\n");
            break;
        }
    }
}
}
int main()
{
    menu();
}
