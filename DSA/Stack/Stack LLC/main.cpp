//
//  main.cpp
//  Stack LLC
//
//  Created by Vimal on 29/09/21.
//

#include <iostream>
using namespace std;
class node{
public:
    int data;
    node *link;
};
class stack{
    node *top;
public:
    stack();
    ~stack();
    void push(int a);
    int pop();
    void display();
};
stack :: stack()
{
    top=NULL;
}
stack :: ~stack()
{
    node *temp=top;
    while(top)
    {
        top=top->link;
        delete temp;
        temp=top;
    }
}
void stack :: push(int a)
{
    node *t=new node;
    t->data=a;
    t->link=top;
    top=t;
}
void stack :: display()
{
    if(top)
    {
    node *t=top;
    while(t)
    {
        cout<<t->data<<endl;
        t=t->link;
    }
    }
    else
        cout<<"Stack Is Empty!\n";
}
int stack:: pop()
{
    if(top)
    {
    node *t=top;
    top=top->link;
    int x=t->data;
    free(t);
    return x;
    }
    else
        return -1;
}
int main()
{
    stack s;
    int a;
    while(1)
    {
        cout<<"1.Push\n2.Display\n3.Pop\n4.Exit\nEnter Your Choice : ";
        cin>>a;
        switch(a)
        {
            case 1:
                int b;
                cout<<"Enter A Value : ";
                cin>>b;
                s.push(b);
                break;
            case 2:
                s.display();
                break;
            case 3:
            {
                int k=s.pop();
                if(k==-1)
                    cout<<"Stack Underflow!\n";
                else
                    cout<<"Pop Out Element : "<<k<<endl;
                break;
            }
            case 4:
                exit(0);
            default:
                cout<<"Invalid Choice!\n";
                break;
        }
        cout<<endl;
    }
}
