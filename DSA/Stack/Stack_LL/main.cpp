//
//  main.cpp
//  Stack_LL
//
//  Created by Vimal on 25/09/21.
//

#include "iostream"
using namespace std;

struct node
{
    int num;
    node *link;
};
struct node *head=NULL;
void Push(int a)
{
    node *temp=(node *)malloc(sizeof(node));
    temp->num=a;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->link=head;
        head=temp;
    }
}
void View()
{
    if(head==NULL)
    {
        cout<<"Underflow!\n";
    }
    else
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->num<<endl;
            temp=temp->link;
        }
    }
}
void Pop()
{
    node *temp=head;
    head=head->link;
    free(temp);
}
int main(){
    while(1){
    int a;
    cout<<"1.Push\n2.View\n3.Pop\n4.Exit\nEnter Your Choice : ";
    cin>>a;
    switch(a){
        case 1:
        {
            int b;
            cout<<"Enter Your Number : ";
            cin>>b;
            Push(b);
            break;
        }
        case 2:
        {
            View();
            break;
        }
        case 3:
        {
            Pop();
            break;
        }
        case 4:
        {
            exit(0);
        }
    }
        cout<<endl;
    }
}
