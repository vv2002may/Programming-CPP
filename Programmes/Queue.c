#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int front,rear;
    int cap;
    int *array;
};
struct queue *create_q(int c)
{
    struct queue *q;
    q=(struct queue *)malloc(sizeof(struct queue));
    if(!q)
        return NULL;
    q->front=q->rear=-1;
    q->cap=c;
    q->array=(int *)malloc(sizeof(int)*c);
    if(!q->array)
        return NULL;
    return q;
}
int isEmpty(struct queue *q)
{
    return(q->front==-1);
}
int isFull(struct queue *q)
{
    return((q->rear+1)%q->cap==q->front);
}
int q_size(struct queue *q)
{
    return((q->cap-q->front+q->rear+1)%q->cap);
}
void insert(struct queue *q,int item)
{
    if(isFull(q))
    {
        printf("Overflow!\n");
    }
    else
    {
        q->rear=(q->rear+1)%q->cap;
        q->array[q->rear]=item;
        if(q->front==-1)
            q->front=q->rear;
    }
}
void delete(struct queue *q)
{
    if(isEmpty(q))
        printf("Underflow!\n");
    else
    {
        printf("Deleted element : %d\n",q->array[q->front]);
        if(q->front==q->rear)
            q->front=q->rear=-1;
        else
        {
            q->front=(q->front+1)%q->cap;
        }
    }
}
void delete_q(struct queue *q)
{
    if(q)
    {
        if(q->array)
            free(q->array);
    }
}
void menu(int c)
{
    while(1)
    {
    int p;
    printf("1.Insert\n2.Delete\n3.Exit\nEnter your choice : ");
    scanf("%d",&p);
    struct queue *q;
    q=create_q(c);
    switch(p)
    {
        case 1:
        {
            int b;
            printf("Enter a value : ");
            scanf("%d",&b);
            insert(q,b);
            break;
        }
        case 2:
        {
            int l;
            printf("1.Delete a element\n2.Delete queue\nEnter your choice : ");
            scanf("%d",&l);
            if(l==1)
            {
                delete(q);
            }
            else
                delete_q(q);
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
    }
    }
}
int main()
{
    int c;
    printf("Enter the capacity of the queue : ");
    scanf("%d",&c);
    menu(c);
}
