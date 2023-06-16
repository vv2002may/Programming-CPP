#include<iostream>
using namespace std;

class Vec
{
    int x,y,z;
    public:
    Vec()
    {
        x=y=z=0;
    }
    Vec(int x)
    {
        this->x=x;
    }
    Vec(int a, int b)
    {
        x=a;
        y=b;
        sum(x,y);
    }
    Vec operator+(Vec v3);
    // {
    //     Vec temp;
    //     temp.x = x + v3.x;
    //     return temp;
    // }
    void sum(int a,int b);
    void show();
};
Vec Vec::operator+(Vec v3)
{
    Vec temp;
    temp.x = x + v3.x;
    return temp; 
}
void Vec::sum(int a, int b)
{
    z=a+b;
}
void Vec::show()
{
    cout<<x<<endl<<y<<endl<<z<<endl;
}
int main()
{
    Vec v1(2,3);
    v1.show();
    Vec v2(5);
    Vec v3(4);
    Vec v4 = v2 + v3;
    v4.show();
    cout<<endl;
}