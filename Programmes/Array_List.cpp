#include<iostream>
using namespace std;
struct node
{
    int size,top;
    int *array;
};
struct node *obj=new struct node;
int main()
{
    system("clear");
    cout<<"Enter the capacity of List : ";
    cin>>obj->size;
    obj->array=new int[obj->size];
    obj->top=-1;
    while(1)
    {
        int n;
        cout<<"1.Push\n2.View\n3.Pop\n4.Exit\nEnter your choice : ";
        cin>>n;
        switch(n)
        {
            case 1:
            if(obj->top==(obj->size-1))
            cout<<"Overflow!\n";
            else
            {
                cout<<"Enter a value : ";
                cin>>obj->array[++obj->top];
            }
            break;

            case 2:
            if(obj->top==-1)
            cout<<"Underflow!\n";
    
            else
            {
            int p=0;
            while(p<=obj->top)
                {
                cout<<obj->array[p]<<endl;
                p++;
                }
            }
            break;

            case 3:
            obj->top--;
            break;

            case 4:
            exit(0);

            default:
            cout<<"Invalid Choice!\n";
            break;
        }
        cout<<endl;
    }
}