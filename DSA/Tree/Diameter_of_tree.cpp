#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node  *right;

    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

node *create()
{
    int d;  cin>>d;
    if(d==-1)
    return NULL;
    node *root=new node(d);
    root->left=create();
    root->right=create();
    return root;
}
int height(node *root)
{
    if(root==NULL)
    return 0;
    int ls=height(root->left);
    int rs=height(root->right);
    return(max(ls,rs)+1);
}
int DOT(node *root)
{
    if(root==NULL)
    return 0;
    int h1=height(root->left),h2=height(root->right);
    int op1=h1+h2;
    int op2=DOT(root->left);
    int op3=DOT(root->right);
    return max(op1,max(op2,op3));
}
int main()
{
    system("clear");
    node *root=create();
    cout<<"Diameter Of Tree : "<<DOT(root)<<endl;
}