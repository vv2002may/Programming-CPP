//FUNCTION OVERLOADING : CONSTRUCTOR OVERLOADING

#include<iostream>
using namespace std;

class Name
{
    string name;
    public:
    Name()
    {
        name="1.Constructor";
    }
    Name(string s)
    {
        name=s;
    }
    Name(Name &n)
    {
        name=n.name;
    }
    void getName(string s)
    {
        name=s;
    }
    void printName()
    {
        cout<<name<<endl;
    }
    
};

int  main()
{
    system("Clear");
    Name a,b("2.Parameterised Constructor");
    a.printName();
    b.printName();
    b.getName("3.Copy Constructor");
    Name c(b);//c=b
    c.printName();
}