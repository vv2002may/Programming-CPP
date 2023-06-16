//variadic functions are used to get variable arguments as per need;

#include<stdio.h>
#include<stdarg.h>//include va_list

int sum(int n,...)///... three dots called as ellipse
{
    va_list v;
    va_start(v,n);
    int s=0;
    for(int i=0;i<n;i++)
    {
        int k=va_arg(v,int);
        s+=k;
    }
    return s;
}
int main()
{
    printf("%d\n",sum(2,4,5));
    printf("%d\n",sum(4,4,5,6,7));
}