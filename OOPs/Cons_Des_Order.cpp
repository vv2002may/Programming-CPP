#include<iostream>
using namespace std;
int i=1,j=1;
class c0
{
	public:
	c0()
	{
		cout<<"c0"<<i++<<endl;;
	}
	~c0()
	{
		cout<<"~c0"<<j++<<endl;
	}
};
class c1 : public c0
{
	public:
	c1()
	{
		cout<<"c1"<<i++<<endl;;
	}
	~c1()
	{
		cout<<"~c1"<<j++<<endl;
	}
};
class c2 : public c1{
	public:
	c2()
	{
		cout<<"c2"<<i++<<endl;
	}
	~c2()
	{
		cout<<"~c2"<<j++<<endl;
	}
};
class c3:public c1, public c2{
	public :
	c3()
	{
		cout<<"c3"<<i++<<endl;
	}
	~c3()
	{
		cout<<"~c3"<<j++<<endl;
	}
};
int main()
{
system("clear");
c3 x1;

cout<<endl;
}