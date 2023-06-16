#include<iostream>
#include<cmath>
using namespace std;
int factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}


int main() {
    float p,q,a,b,tot=0;
     cin>>a>>b;
     p = a/(a+b);
     q = b/(a+b);
     
     for(int i=3;i<=6;i++){
         tot+= (factorial(6)*pow(p,i)*pow(q,6-i))/(factorial(i)*factorial(6-i));
     }
     
     printf("%.3f",tot);
    return 0;
}