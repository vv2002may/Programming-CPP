#include<iostream>
using namespace std;

class operate
{
    int a,b;
    public:
    operate()
    {
        a=0;
        b=0;
    }
    operate(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    operate operator * (operate o1)
    {
        operate o2;
        o2.a=a+o1.a;
        o2.b=b+o1.b;
        return o2;
    }

    void display()
    {
        cout<<a<<endl<<b<<endl;
    }
};

int main()
{
    system("clear");
    operate o1(5,10);
    operate o2(1,9);
    operate o3=o2*o1;
    o3.display();
}