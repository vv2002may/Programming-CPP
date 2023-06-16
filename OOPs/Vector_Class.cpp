#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T *ptr;
    int n;
public:
    Array()
    {
        ptr = new T;
        n=-1;
    }
    void push(T);
    void print();
    void pop();
};

template <class T>
void Array<T>::push(T a) {
    n++;
    ptr[n]=a;
}
template <typename T>
void Array<T>::pop()
{
    if(n==-1)
    cout<<"It's Empty!\n";
    else
    {
        n--;
    }
}
template <typename T>
void Array<T>::print() {
if(n==-1)
cout<<"It's Empty!\n";
else
{
    for(int i=0;i<=n;i++)
    cout<<ptr[i]<<endl;
}
}

int main() {
    system("clear");
    Array<int> a;
    while(1)
    {
        int k;
        cout<<"1.Push\n2.Pop\n3.Print\n4.Exit\nEnter your choice : ";
        cin>>k;
        switch(k)
        {
            case 1:
            {
                for(int i=1;i<11;i++)
                {
                    a.push(i);
                }
                break;
            }
            case 2:
            {
                a.pop();
                break;
            }
            case 3:
            {
                a.print();
                break;
            }
            case 4:
            exit(0);
        }
    }
    return 0;
}