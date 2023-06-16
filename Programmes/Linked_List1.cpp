#include<iostream>
using namespace std;

struct node
{
    char name[20];
    struct node *link;
};
struct node *head=NULL;
struct node *create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}
void View()
{
    if(head==NULL)
    cout<<"List Is Empty!\n";
    else
    {
        int c=1;
        struct node *t;
        t=head;
        while(t!=NULL)
        {
            cout<<c<<". "<<t->name<<endl;
            c++;
            t=t->link;
        }
    }
}
void Insert()
{
    struct node *t;
    t=create();
    int b;
    if(head==NULL)
    {
        cout<<"Enter your name : ";
        cin>>t->name;
        t->link=NULL;
        head=t;
    }
    else
    {
        cout<<"1.In Begin\n2.After Node\n3.At End\n";
        cout<<"Enter Your Choice : ";
        cin>>b;
        switch(b)
        {
            case 1:
            {
                cout<<"Enter your name : ";
                cin>>t->name;
                t->link=head;
                head=t;
                break;
            }
            case 2:
            {
                View();
                cout<<endl;
                int d;
                cout<<"Enter node number : ";
                cin>>d;
                cout<<"Enter your name : ";
                cin>>t->name;
                int e=1;
                struct node *temp=head;
                while(e<d)
                {
                    temp=temp->link;
                    e++;
                }
                t->link=temp->link;
                temp->link=t;
                break;
            }
            case 3:
            {
                cout<<"Enter your name : ";
                cin>>t->name;
                t->link=NULL;
                struct node *temp;
                temp=head;
                while(temp->link!=NULL)
                {
                    temp=temp->link;
                }
                temp->link=t;
                break;
            }
            default:
            {
                cout<<"Invalid Choice! Try Again...\n";
            }
        }
    }
}

void Delete()
{
    struct node *t;
    if(head==NULL)
    cout<<"List Is Empty!\n";
    else
    {
        View();
        cout<<endl;
        int f;
        cout<<"1.In Begin\n";
        cout<<"2.A Node\n";
        cout<<"3.At End\n";
        cout<<"4.All Nodes\n\n";
        cout<<"Enter your choice : ";
        cin>>f;
        switch(f)
        {
            case 1:
            {
                case1:
                t=head;
                head=head->link;
                free(t);
                break;
            }
            case 2:
            {
                int d;
                cout<<"Enter node number : ";
                cin>>d;
                int i=1;
                struct node *t=head,*temp;
                if(d==1)
                goto case1;
                else
                {
                while(i<d-1)
                {
                    t=t->link;
                    i++;
                }
                temp=t->link;
                t->link=temp->link;
                free(temp);
                }
                break;
            }
            case 3:
            {
                t=head;
                while((t->link)->link!=NULL)
                t=t->link;
                struct node *temp=t->link;
                t->link=NULL;
                free(temp);
                break;
            }
            case 4:
            {
                struct node *t=head;
                while(t!=NULL)
                {
                    head=t->link;
                    free(t);
                    t=head;
                }
                
                break;
            }
            default:
            {
                cout<<"Invalid Choice! Try Again...\n";
            }
        }
    }
}

int main()
{
    system("clear");
    while(1)
    {
        cout<<"\n***** Menu *****\n";
    int a;
    cout<<"1.Insert\n";
    cout<<"2.View\n";
    cout<<"3.Delete\n";
    cout<<"4.Exit\n";
    cout<<"\nEnter your choice : ";
    cin>>a;
    switch(a)
    {
        case 1:
            Insert();
            break;
        case 2:
            View();
            break;
        case 3:
            Delete();
            break;
        case 4:
            exit(0);
        default :
        cout<<"Invalid Choice! Try Again...\n";
        break;
    }
    }
}