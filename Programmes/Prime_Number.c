#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
/*int main()
{
	int n,i;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=2;i<n-1;i++)
	{
		if(n%i==0)
			break;
	}
	if(n-1==i)
		printf("Yes");
}*/

bool isprime(int n)
{
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main()
{
	system("clear");
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(isprime(n))
		printf("%d is prime!\n",n);
	else
	printf("%d is not prime!\n",n);
}
