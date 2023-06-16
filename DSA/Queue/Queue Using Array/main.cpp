//
//  main.cpp
//  Queue Using Array
//
//  Created by Vimal on 26/09/21.
//

#include <iostream>
using namespace std;

struct queue
{
    int front,rear;
    int size;
    int *array;
};

bool IsFull(queue q)
{
    if(q.rear==q.size-1)
        return true;
    else
        return false;
}
bool IsEmpty(queue q)
{
    if(q.front==q.rear)
        return true;
    else
        
        return false;
}

void Enqueue(queue q)
{
    if(IsFull(q))
        cout<<"Queue Is Full!\n";
    else
    {
        q.rear++;
        cout<<"Enter a value : ";
        cin>>q.array[q.rear];
    }
}
int Dequeue(queue q)
{
    int x=-1;
    if(IsEmpty(q))
        cout<<"Queue Is Empty!\n";
    else
    {
        q.front++;
        x=q.array[q.front];
    }
    
    return x;
}

void View(queue q)
{
    if(IsEmpty(q))
        cout<<"Queue Is Empty!\n";
    else
    {
        for(int i=q.rear;i<q.size;i++)
        {
            cout<<q.array[i]<<endl;
        }
    }
}
int main()
{
    struct queue q;
    int a;
    cout<<"Enter Size Of Queue : ";
    cin>>a;
    q.size=a;
    q.front=q.rear=-1;
    q.array=new int[q.size*sizeof(int)];//(int *)malloc(q.size*sizeof(int));
    int b;
    while(1)
    {
    cout<<"1.Enqueue\n2.Dequeue\n3.View\n4.IsFull\n5.IsEmpty\n6.Exit\nEnter Your Choice : ";
    cin>>b;
    switch(b)
    {
        case 1:
        {
            Enqueue(q);
            break;
        }
        case 2:
        {
            int x=Dequeue(q);
            if(x!=-1)
            cout<<"Deleted Value : "<<x<<endl;
            
            break;
        }
        case 3:
        {
            View(q);
            break;
        }
        case 4:
        {
            if(IsFull(q))
                cout<<"Queue Is Full!\n";
            else
                cout<<"Queue Is Not Full!\n";
            break;
        }
        case 5:
        {
            if(IsEmpty(q))
                cout<<"Queue Is Empty!\n";
            else
                cout<<"Queue Is Not Empty!\n";
            break;
        }
        case 6:
        {
            exit(0);
            break;
        }
        default:
        {
            cout<<"Invalid Choice!\n";
            break;
        }
    }
        cout<<endl;
    }
}

