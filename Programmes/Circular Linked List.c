/*
* @Author: apple
* @Date:   2021-05-06 02:09:28
* @Last Modified by:   apple
* @Last Modified time: 2021-05-06 02:14:07
*/

#include<stdio.h>
#include<stdlib.h>
void menu()
{
	while(1)
	{
		int n;
		printf("1.Insert\n2.View\n3.Delete\n4.Exit\nEnter your choice : ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			exit(0);
			default:
			{
				printf("Invalid Choice!\n");
				break;
			}
		}
	}
}
#include<stdio.h>
int main()
{
	menu();
}