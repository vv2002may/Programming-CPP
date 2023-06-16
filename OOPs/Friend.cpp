//Same friend function can be used for more than one class

#include<iostream>
using namespace std;
class SUM;//Forward declaration
class Complex
{
    int a,b;
    public:
    void setdata(int x ,int y)
    {
        a=x;    b=y;
    }
    void print()
    {
        cout<<a<<" + i"<<b<<endl;
    }
    friend void ch_data(Complex c);//We can also define friend function inside
    //Can be declared in private or public or any access mode
    //It is not class member
    // {
    //     cout<<c.a<<" + i"<<c.b<<endl;
    // }

    friend void sum(Complex,SUM);
};

class SUM
{
    int c;
    public:
    void set(int s)
    {
        c=s;
    }
    friend void sum(Complex,SUM);
};
void sum(Complex x,SUM y)
{
    cout<<"Sum : "<<(x.a + y.c)<<endl;//friend function can access private members
}
void ch_data(Complex c)//We can also define friend function inside
    {
        cout<<c.a<<" + i"<<c.b<<endl;
    }
int main()
{
system("clear");
Complex c1;
c1.setdata(5,3);
c1.print();
ch_data(c1);
SUM c3;
c3.set(22);
sum(c1,c3);
cout<<endl;
}