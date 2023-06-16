#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;

        node(int value)
        {
            data=value;
            next=NULL;
        }

        void print(node *root)
        {
            while(root!=NULL)
            {
                cout<<root->data<<endl;
                root=root->next;
            }
        }

}*head=NULL;

int main()
{
    system("clear");
    int choice; 
    while(true)
    {
        printf("\n1.Insert\n2.View\n3.Delete\n4.Exit\nEnter your choice : ");
        cin>>choice;
        switch(choice)
        {
            case 1:
                {
                    int choose; 
                    printf("\n1.At Beginning\n2.At End\nChoose : ");
                    cin>>choose;
                    switch(choose)
                    {
                        case 1:
                        {
                            int a; 
                            cout<<"Enter value: ";
                            cin>>a;
                            if(head==NULL)
                            {
                                head = new node(a);
                            }
                            else
                            {
                                node *temp=new node(a);
                                temp->next=head;
                                head=temp;  
                            }
                            break;
                        }
                        case 2:
                        {
                            int a; 
                            cout<<"Enter value: ";
                            cin>>a;
                            if(head==NULL)
                            {
                                head = new node(a);
                            }
                            else
                            {
                                node *t = head;
                                while(t->next!=NULL)
                                { 
                                    t=t->next;
                                }
                                t->next=new node(a);  
                            }
                            break;
                        }
                    }
                    break;
                }
            case 2:
                {
                    head->print(head);
                    break;
                }
            case 3:
                {
                    int choose; 
                    printf("\n1.At Beginning\n2.At End\nChoose : ");
                    cin>>choose;
                    switch(choose)
                    {
                        case 1:
                        {
                            node *temp=head;
                            head=head->next;
                            delete temp;
                            break;
                        }
                        case 2:
                        {
                            node *temp = head;
                            while((temp->next)->next!=NULL)
                            {
                                temp=temp->next;
                            }
                            node *t=temp->next;
                            temp->next=NULL;
                            delete t;
                        }
                    }
                    break;
                }
            case 4:
                {
                    exit(0);
                }
        }
    }
}
    

