#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char *a,*b;
    struct node *link;
};
struct node *start=NULL;
struct node *create_node()
{
    struct node *new;
    new=malloc(sizeof(struct node));
    new->a=malloc(sizeof(char));
    new->b=malloc(sizeof(char));
    new->link=NULL;
    return new;
}
void insert()
{
        if(start==NULL)
        {
            start=create_node();
            scanf("%s %s",start->a,start->b);
        }
        else
        {
            struct node *t,*temp=create_node();
            scanf("%s %s",temp->a,temp->b);
            t=start;
            while(t->link!=NULL)
                t=t->link;
            t->link=temp;
        }
}
void search(char *c)
{
    struct node *t=start;
    while(t!=NULL)
    {
        if(strcmp(t->a,c)==0)
        break;
        t=t->link;
    }
    if(t!=NULL)
    printf("%s=%s\n",t->a,t->b);
    else
    printf("Not found\n");

}
int main()
{
    int n;
    char *c=malloc(sizeof(char));
    scanf("%d",&n);
    while(n--)
    insert();
    while(scanf("%s",c))
    {
        search(c);
    }
}