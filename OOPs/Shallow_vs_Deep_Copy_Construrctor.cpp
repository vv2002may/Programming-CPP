#include<iostream>
using namespace std;

class Car
{
    float price;
    public:
    int model;
    char *name;
    Car()
    {
        name=NULL;
    }
    Car(float p,int m,char *n)//Shallow Copy :- Share same address
    {
        price=p;
        model=m;
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    Car(Car &X)//Deep Copy :- Use another address, required when class have pointer data member
    {
        price=X.price;
        model=X.model;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
    }
    void set_price(float p)
    {
        price =p;
    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

int main()
{
system("clear");
Car a(400,12131231,"Audi");
Car b(a);
b.set_price(800);
b.name[0]='B';
b.print();
a.print();
cout<<endl;
}