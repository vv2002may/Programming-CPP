#include<stdio.h>
int main()
{
	int n;
	printf("Enter Size Of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter value : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
		}
	}
	printf("Sorted Array : ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}