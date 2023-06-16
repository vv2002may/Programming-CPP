#include "stdio.h"
#include "stdlib.h"
struct node
{
    struct node *left,*right;
    int a;
};
struct queue
{
    struct node *q;
};
struct node *root=NULL;
struct node *create_node()
{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    return temp;
}
void insert_node()
{
    struct node *temp=create_node();
    printf("Enter a value : ");
    scanf("%d",&temp->a);
    temp->left=temp->right=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        
    }
}

void preOrder(struct node *temp)
{
    if(temp==NULL)
        printf("Tree is empty.\n");
    else
    {
            printf("%d\n",temp->a);
            preOrder(temp->left);
            preOrder(temp->right);
    }
}
void inOrder(struct node *temp)
{
    if(temp==NULL)
        printf("Tree is empty.\n");
    else
    {
            inOrder(temp->left);
            printf("%d\n",temp->a);
            inOrder(temp->right);
    }
}
void postOrder(struct node *temp)
{
    if(temp==NULL)
        printf("Tree is empty.\n");
    else
    {
            postOrder(temp->left);
            postOrder(temp->right);
            printf("%d\n",temp->a);
    }
}
/*void levelOrder(struct node *temp)
{
    struct node *t;
    struct queue *q=create_q();
    if(!temp)
        return;
    insert_q(q,temp);
    while(!isEmpty_q(q))
    {
        t=delete_q(q);
        printf("%d",t->a);
        if(t->left)
            insert_q(q,t->left);
        if(t->right)
            insert_q(q,t->right);
    }
 delete_q(q);
}*/
