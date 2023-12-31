#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int next_permutation(int n, char **s)
{
    int i,j;
    for(i=n-1;(strcmp(s[i-1],s[i])>=0);i--)
    {
        if(i==0)
        return 0;
    }
    for(j=n-1;(strcmp(s[i-1],s[j])>=0);j--)
    {}
    char *t;
    t=s[i-1];
    s[i-1]=s[j];
    s[j]=t;
    for(j=n-1;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}