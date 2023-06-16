#include<iostream>
using namespace std;
class a
{
    friend class b;//make friend class b to a
    private:
    int x;
    public:
    a(int x)
    {
        this->x=x;
    }
};
class b
{
    public:
    b()
    {
        a a1(10);
        cout<<a1.x<<endl;// to access class a private member
    }
};
int main()
{
system("clear");
b b1;
cout<<endl;
}