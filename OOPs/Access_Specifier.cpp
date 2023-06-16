#include<iostream>
using namespace std;

class a
{
    private:
    int a1;
    protected:
    int a2;
    public:
    int a3;
};
class b : protected a
{
    private:
    int b1;
    protected:
    int b2;
    public:
    int b3;
};
int main()
{
system("clear");
b bo;
bo.a3;
cout<<endl;
}