#include<iostream>
#include<stack>
using namespace std;
int main()
{
    system("clear");
    stack<string> s;
    s.push("Vimal");
    s.push("Sumit");
    s.push("Nirmal");
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    stack<int> i;
    i.push(33);
    i.push(44);
    while(!i.empty())
    {
        cout<<i.top()<<endl;
        i.pop();
    }
    cout<<s.size()<<" "<<i.size()<<endl;//number of elements in stack.

    stack<int> a,b;
    for(int i=1;i<5;i++)
    {
        a.push(i);
    }
    for (int i = 5; i < 10; i++)
    {
        b.push(i);
    }
    //a.swap(b);
    for(int i=0;i<5;i++)
    {
        cout<<a.top()<<" "<<b.top()<<endl;
        a.pop();
        b.pop();
    }
}