#include<iostream>
using namespace std;

class accounts
{
    int balance;//INSTANCE MEMBER VARIABLE : diff for diff class objects
    static int roi;//STATIC MEMBER VARIABLE OR CLASS VARIABLE : same for all class objects

    public:
    static int loan;
    void setbalance(int b)
    {balance=b;}
    void display()//INSTANCE MEMBER FUNCTION
    {
        cout<<"Balance in your accounts : "<<balance<<endl;
        cout<<"Rate of interest : "<<roi<<endl;
    } 
    void setrate(int r)//INSTANCE MEMBER FUNCTION
    { roi=r; }

    static void setroi(int r)//static member function
    {
        roi=r;
    }
};

int accounts::roi=4;//declaring memory for static variable
int accounts::loan;
int main()
{
system("clear");
accounts a1;
a1.setbalance(80000);
a1.display();
accounts::loan=5;//to access public static variable
cout<<"Loan : "<<accounts::loan<<endl;
a1.setrate(6);
accounts::setroi(10);//CAN ALSO BE CALLED BY OBJECTS
a1.setroi(99);
a1.display();
cout<<endl;
}