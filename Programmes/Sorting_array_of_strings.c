#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
return strcmp(b,a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
int p1=0,y=0,p2=0;
//abacc
for(int i=0;i<strlen(a);i++)
{
    y=0;
    for(int j=0;j<i;j++)
    {
        if(a[i]==a[j])
        y=1;
    }
    if(y==0)
    {
    for(int j=0;j<strlen(a);j++)
    {
       if(a[i]==a[j] &&  i!=j)
       p1++; 
    }
    }
}

for(int i=0;i<strlen(b);i++)
{
    y=0;
    for(int j=0;j<i;j++)
    {
        if(b[i]==b[j])
        y=1;
    }
    if(y==0)
    {
    for(int j=0;j<strlen(b);j++)
    {
       if(b[i]==b[j] &&  i!=j)
       p2++; 
    }
    }
}

int l1=strlen(a)-p1,l2=strlen(b)-p2;
if(l1==l2)
{
    return lexicographic_sort(a, b);
}
if(l1>l2)
return 1;
else {
return -1;
}
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a)==strlen(b))
    return lexicographic_sort(a,b);
    else if(strlen(a)<strlen(b))
    return -1;
    else {
    return 1;
    }
}

void string_sort(char** arr,const int n,int (*cmp_func)(const char* a, const char* b)){
for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(cmp_func(arr[i],arr[j])<0)
            {
            char *x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}