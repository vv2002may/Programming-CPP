#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int cap;
    int *array;
};
struct stack *create_stack(int c)
{
    struct stack *s;
    s=malloc(sizeof(struct stack));
    s->top=-1;
    s->cap=c;
    s->array=malloc(sizeof(int)*c);
    return s;
}
int isFull(struct stack *s)
{
    if(s->top==s->cap-1)
        return 1;
    else
        return 0;
}
int isEmpty(struct stack *s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}
void push(struct stack *s,int item)
{
    if(isFull(s))
        printf("Overflow!\n");
    else
    {
        s->top++;
        s->array[s->top]=item;
    }
}
void pop(struct stack *s)
{
    if(isEmpty(s))
        printf("Underflow!\n");
    else
    {
    printf("Pop element is %d\n",s->array[s->top]);
    s->top--;
    }
}
void view(struct stack *s)
{
    if(isEmpty(s))
        printf("Underflow!\n");
    else
    {
        for(int i=0;i<s->top+1;i++)
        {
            printf("%d. %d\n",i+1,s->array[i]);
        }
    }
}
int main()
{
    system("clear");
    int c;
    printf("Enter the capacity of stack : ");
    scanf("%d",&c);
    struct stack *temp=create_stack(c);
    while(1)
    {
        int p;
        printf("1. Push\n2. Pop\n3. View\n4. Exit\nEnter your choice : ");
        scanf("%d",&p);
        switch(p)
        {
            case 1:
            {
                if(isFull(temp))
                    printf("Overflow!\n");
                else
                {
                int k;
                printf("Enter a value : ");
                scanf("%d",&k);
                push(temp,k);
                }
                break;
            }
            case 2:
            {
                pop(temp);
                break;
            }
            case 3:
            {
                view(temp);
                break;
            }
            case 4:
            {
                exit(1);
                break;
            }
        }
    }
}
