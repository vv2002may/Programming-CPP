#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node *buildTree()
{
    int d;  cin>>d;
    if(d==-1)
    return NULL;
    node *root=new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void Preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Postorder(node *root)
{
    if(root==NULL)
    return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
int height(node *root)
{
    if(root==NULL)
    return 0;
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;
}
void printkthlevel(node *root,int k)
{
    if(root==NULL)
    return;
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
}
void printall(node *root)//print level elements with O(n*n) 
{
    int h=height(root);
    for(int i=0;i<=h;i++)
    {
        printkthlevel(root,i);
        cout<<endl;
    }
}
void bfs(node *root)//breadth first search : print level elements with O(n)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *f=q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout<<f->data<<", ";
            q.pop();

            if(f->left)
            q.push(f->left);
            if(f->right)
            q.push(f->right);
        }
    }
}
int count(node *root)
{
    if(root==NULL)
    return 0;
    return (1+count(root->left)+count(root->right));
}
int countleafnode(node *root)
{
    if(root == nullptr)
    return 0;
    if(root->left == nullptr && root->right == nullptr)
    {
        return(1+countleafnode(root->left)+countleafnode(root->right));
    }
    else
    {
        return(countleafnode(root->left)+countleafnode(root->right));
    }
}
int sum(node *root)
{
    if(root==NULL)
    return 0;
    return (root->data + sum(root->left) + sum(root->right));
}
int main()
{
    system("clear");
    node *root=buildTree();
    // cout<<"Preorder...\n";
    // Preorder(root);
    // cout<<"\nInorder...\n";
    // Inorder(root);
    // cout<<"\nPostorder...\n";
    // Postorder(root);
    // cout<<"\nheight of tree : "<<height(root)<<endl;
    // int k;
    // cout<<"Enter level : ";
    // cin>>k;
    // printkthlevel(root,k);
    // cout<<endl;
    // cout<<"Print all elements using recursion...\n";
    // printall(root);
    // cout<<endl;
    // cout<<"Print all elements using bfs...\n";
    bfs(root);
    //cout<<endl;
    // cout<<"Number of nodes in tree : "<<count(root)<<endl;
    cout<<"Sum of node in tree : "<<sum(root)<<endl;
    cout<<"Leaf node : "<<countleafnode(root)<<endl;

}