//
//  main.cpp
//  Stack_Array
//
//  Created by Vimal on 25/09/21.
//

#include <iostream>
using namespace std;

struct stack{
    int top=-1;
    int capacity;
    int *array;
}stack;

void Push()
{
    
    if(stack.top==stack.capacity-1)
    {
        cout<<"Overflow!\n";
    }
    else
    {
        stack.top++;
        int a;
        cout<<"Enter a number : ";
        cin>>a;
        stack.array[stack.top]=a;
    }
}

void Pop()
{
    if(stack.top==-1)
    {
        cout<<"Underflow!\n";
    }
    else
    {
        stack.top--;
    }
}

void View()
{
    if(stack.top==-1)
        cout<<"List is Empty!\n";
    else
    {
        for(int i=0;i<stack.top+1;i++)
        {
            cout<<stack.array[i]<<endl;
        }
    }
}

int main()
{
    cout<<"Enter Capacity Of Stack : ";
    cin>>stack.capacity;
    stack.array=new int[stack.capacity];
    int b;
    while(1)
    {
    cout<<"1.Push\n2.Pop\n3.View\n4.Exit\nEnter Your Choice : ";
    cin>>b;
    switch(b)
    {
        case 1:
        {
            Push();
            break;
        }
        case 2:
        {
            Pop();
            break;
        }
        case 3:
        {
            View();
            break;
        }
        case 4:
            exit(0);
        default:
        {
            cout<<"Invalid Choice! Try Again...\n";
            break;
        }
    }
    }
}
