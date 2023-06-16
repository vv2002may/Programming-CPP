#include<iostream>
using namespace std;

class Q
{
    int val,cs,ms,rr,fr;
    int *array;
    public:
    Q(int cap){
        ms=cap;
        cs=0;
        rr=-1;
        fr=-1;
        array = new int[ms];
    }
    void push()
    {
        if(cs==ms)
        {
            cout<<"Overflow!\n";
            return;
        }
        cout<<"Enter value : ";
        cin>>val;
        rr = (rr+1)%ms;
        array[rr]=val;
        cs++;
    }
    int pop()
    {
        if(cs==0)
        {
            cout<<"Underflow!\n";
            return -1;
        }
        cs--;
        fr=(fr+1)%ms;
        int s = array[fr];
        return s;
    }
    void view()
    {
        if(cs==0)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        for(int i=(fr+1)%ms,c=0;c<cs;i=(i+1)%ms)
            {
                cout<<array[i]<<endl;
                c++;
            }
    }

};

int main()
{
system("clear");
int cap;
cout<<"Enter size of Queue : ";
cin>>cap;
Q q(cap);
while(true)
{
    int a;
    cout<<"1.Push\n2.Pop\n3.View\n4.Exit\nEnter your choice : ";
    cin>>a;
    switch(a)
    {
        case 1:
        {
            q.push();
            break;
        }
        case 2:
        {
            cout<<"Pop out value : "<<q.pop()<<endl;
            break;
        }
        case 3:
        {
            q.view();
            break;
        }
        case 4:
        {
            exit(1);
        }
    }
}
cout<<endl;
}