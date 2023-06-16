#include<iostream>
using namespace std;
//if pure virtaul function defined in base class -> it becomes abstract class 
//you have to redefine it in derived class
//otherwise it shows error
class a1
{
    public:
    // virtual void show()=0;//pure virtual function:only prototype no definition
    virtual void show()
    {
        cout<<"a1\n";
    }
};
class a2 : public a1
{
    public:
    void show()
    {
        cout<<"a2\n";
    }
};
int main()
{
system("clear");
a1 *x1;
a2 x2;
x1=&x2;
x1->show();
cout<<endl;
}