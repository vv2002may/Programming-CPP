#include<iostream>
using namespace std;

class stack
{
    int top,cap;
    char *s;
    public:
    stack(char *s)
    {
        cap=strlen(s+1);
        top=-1;
        this->s = new char[cap];
    }
    int operand(char x)
    {
        if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
        return 1;
    }
    int pre(char x)
    {
        if(x=='+' || x=='-')
        return 1;
        else if(x=='*' || x=='/')
        return 2;
        return 0;
    }
    char* convert(char *st)
    {
        int i=0,j=0;
        while(st[j]!='\0')
        {
            if(operand(st[i]))
            {
                *s[i++]=st[j++];
            }
            else
            {
                if(pre(st[i])>s[j])

            }
        }
    }
};

int main()
{
    system("clear");
    char *s = new char[100] ;
    cin>>s;
    stack st(s);
    // st.convert(s);
}