#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int n,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int p=n;p!=0;p/=10)
    {
        int c=p%10;
        s=s*10 + c;
    }
    printf("Reverse of number : %d",s);
}