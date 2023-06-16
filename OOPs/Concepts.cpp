#include<iostream>
using namespace std;

class car
{
    int price;
    public:
    const int msp;//CONSTANT DATA MEMBER
    int model;
    char *name;

    car():msp(99)//LIST INITIALISATION
    {
        name=NULL;
    }
    car(int p,int m,char *n,int mp):price(p),model(m),msp(mp) //LIST INITIALISATION
    {
        //price=p;
        //model=m;
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }

    void setprice(const int p)//CONSTANT PARAMETER :- DO NOT GET UPDATE INSIDE THAT FUNCTION
    {
        price=p;
    }

    void operator=(const car &X)//COPY ASSIGNMENT OPERATOR
    {
        model=X.model;
        price=X.price;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
    }

    void print() const//CONSTANT FUNCTION :- DO NOT UPDATE DATA MEMBERS OF CLASS 
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
    cout<<a.msp<<endl;
    //a.msp++; const data member can not be increased
    car b(1000,123456,"ALTO",900);
    cout<<b.msp<<endl;
    car c=b;//COPY CONSTRUCTOR :- CAN BE CALLED ONLY ONCE
    car d;
    d=b;//COPY ASSIGNMENT OPERATOR :- CAN BE CALLED MANY TIMES
    d.name[0]='P';
    d.setprice(9000);
    d.print();
    cout<<endl;
    b.print();
    cout<<endl;
}