#include<iostream>
using namespace std;

class car
{
    int price;
    public:
    int model;
    char *name;
    car()
    {
        name=NULL;
    }
    car(int p,int m,char *n)
    {
        price=p;
        model=m;
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }

    void operator=(car &X)//COPY ASSIGNMENT OPERATOR
    {
        model=X.model;
        price=X.price;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
    }

    void print()
    {
        cout<<"Name  : "<<name<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Price : "<<price<<endl;
    }

};

int main()
{
    system("clear");
    car a;
    car b(100,123456,"ALTO");
    car c=b;//COPY CONSTRUCTOR :- CAN BE CALLED ONLY ONCE
    car d;
    d=b;//COPY ASSIGNMENT OPERATOR :- CAN BE CALLED MANY TIMES
    d.name[0]='P';
    d.print();
    b.print();
    cout<<endl;
}