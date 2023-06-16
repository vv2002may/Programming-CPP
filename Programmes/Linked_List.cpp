#include<iostream>
using namespace std;
struct node 
{
    string s;
    struct node *next;
};
struct node *head=NULL;
struct node *create_node()
{
    struct node *temp;
    temp=new struct node;
    cout<<"Enter string : ";
    cin.get();
    getline(cin,temp->s);
    temp->next=NULL;
    return temp;
}

void insert_node()
{
    if(head==NULL)
    head=create_node();
    else
    {
        int n;
        printf("1.At Beginning\n2.At End\n3.After a Node\nEnter your choice : ");
        cin>>n;
        struct node *temp=create_node(),*t;
        switch(n)
        {
            case 1:
            {
                t=head;
                head=temp;
                head->next=t;
                break;
            }
            case 2:
            {
                t=head;
                while(t->next!=NULL)
                t=t->next;
                t->next=temp;
                break;
            }
            case 3:
            {
                int p,k=1;
                cout<<"Enter a node : ";
                cin>>p;
                t=head;
                while(k<p)
                {
                    t=t->next;
                    k++;
                }
                struct node *l;
                l=t->next;
                t->next=temp;
                temp->next=l;
                break;
            }
        }
    }
}

void view_node()
{
    if(head==NULL)
    cout<<"List is empty!\n";
    else
    {
    struct node *t;
    t=head;
    int p=1;
    while(t!=NULL)
    {
        cout<<p<<". "<<t->s<<endl;
        t=t->next;
        p++;
    }
    }
}

void delete_node()
{
    if(head==NULL)
    cout<<"List is empty!\n";
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        int n;
        cout<<"1.At Beginning\n2.At End\n3.Between Two Node\nEnter your choice : ";
        cin>>n;
        struct node *t,*temp;
        switch(n)
        {
            case 1:
            {
                t=head;
                head=head->next;
                free(t);
                break;
            }
            case 2:
            {
                t=head;
                while((t->next)->next!=NULL)
                t=t->next;
                temp=t->next;
                t->next=NULL;
                free(temp);
                break;
            }
            case 3:
            {
                int a,b,k=1;
                cout<<"Enter first node : ";
                cin>>a;
                cout<<"Enter second node : ";
                cin>>b;
                t=head;
                while(k<a)
                {
                    t=t->next;
                    k++;
                }
                while(a<b-1)
                {
                    temp=t->next;
                    t->next=temp->next;
                    free(temp);
                    a++;
                }
                break;
            }
        }
    }

}

void menu()
{
    while(1)
    {
    int n;
    printf("1.Insert\n2.View\n3.Delete\n4.Exit\nEnter your choice : ");
    cin>>n;
    switch(n)
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
            cout<<"Invalid Choice!\n";
            break;
        }
    }
    cout<<endl;
    } 
}

int main()
{
    system("clear");
    menu();
}