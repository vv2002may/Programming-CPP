#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head=NULL;

void insert()
{
    node *temp=new node;
    int val;
    cout<<"Enter value : ";
    cin>>val;
    temp->data=val;
    temp->next=NULL;
    if(head==nullptr)
    head=temp;
    else
    {
        if(val<head->data)
        {
            temp->next=head;
            head=temp;
            return;
        }
        node *t=head,*p=head;
        while(val>t->data && t->next)
        {
            p=t;
            t=t->next;
        }
        
        if(t->next==nullptr and val>t->data)
        t->next=temp;
        else
        {
            node *q=p->next;
            p->next=temp;
            temp->next=q;
        }
    }
}
void view()
{
    if(head==NULL)
    {
        cout<<"Empty\n";
        return;
    }
    node *t=head;
    while(t!=nullptr)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

int main()
{
    system("clear");
    while (1)
    {
        int a;
        cout<<"1.Insert\n2.Exit\nEnter your choice : ";
        cin>>a;
        switch(a)
        {
            case 1:
            {
                insert();
                view();
                break;
            }
            case 2:
            exit(1);
        }
        cout<<endl;
    }
    
}