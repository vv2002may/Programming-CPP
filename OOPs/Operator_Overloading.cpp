#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int r, int i)
    {
        real=r;
        img=i;
    }
    void setreal(const int r)
    {
        real=r;
    }
    void setimg(const int i)
    {
        img=i;
    }
    int getreal() const
    {
        return real;
    }
    int getimg() const
    {
        return img;
    }
    // void add(const complex x)
    // {
    //     real=real+x.real;
    //     img=img+x.img;
    // }
    // complex operator + (complex &x)//1.operator overloading
    // {
    //     complex t;
    //     t.real=real+x.real;
    //     t.img=img+x.img;
    //     return t;
    // }
    void operator+(const complex &x)//2.operator overloading
    {
        real=real+x.real;
        img=img+x.img;
    }
    void operator !()
    {
        img*=-1;
    }
    void operator[](string s)
    {
        printf("Complex : %d + %di",real,img);
        cout<<s<<endl;
    }
    void print() const
    {
        if(img>0)
        printf("Complex : %d + %di\n",real,img);
        else
        printf("Complex : %d - %di\n",real,-img);
    }
};

/*void operator >>(istream &cin, complex &x)
{
    int f,y;
    cout<<"Enter two number : ";
    cin>>f>>y;
    x.setreal(f);
    x.setimg(y);
}
void operator <<(ostream &cout, complex &x)
{
    x.print();
}*/
// CASCADING
istream& operator >>(istream &cin, complex &x)
{
    int f,y;
    cout<<"Enter two number : ";
    cin>>f>>y;
    x.setreal(f);
    x.setimg(y);
    return cin;
}
ostream& operator <<(ostream &cout, complex &x)
{
    x.print();
    return cout;
}

int main()
{
    system("clear");
    complex a;
    complex b(5,-3);
    a.print();
    b.print();
    complex c;
    c=b;//copy assignment operator
    c.print();
    complex d;
    d.setreal(1);
    d.setimg(9);
    d.print();
    //d.add(b);
    //d=d+b;//or d=d.operator+(b) //1.operator overlaoding  
    d+b;//2.operator overloading
    d.print();
    !d;
    d.print();
    d[" is cool."];
    complex e;
    cin>>e;
    cout<<e;

    complex f,g;
    cin>>f>>g;
    cout<<f<<g;

}