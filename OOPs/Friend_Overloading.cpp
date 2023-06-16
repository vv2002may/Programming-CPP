#include<iostream>
using namespace std;
class SUM
{
    int a, b;
    public:
        void setdata(int x, int y)
        {
            a=x;    b=y;
        }
        void showdata()
        {
            cout<<"Sum : "<<a+b<<endl;
        }
        friend SUM operator+(SUM X,SUM Y);
};
SUM operator+(SUM X,SUM Y)
 {
            SUM s;
            s.a=Y.a+X.a;
            s.b=Y.b+X.b;
            return s;
}
int main()
{
system("clear");
SUM s1,s2,s3;
s1.setdata(4,3);
s2.setdata(2,1);
s3=s1+s2;//or s3=operator+(s1,s2);
s3.showdata();
cout<<endl;
}