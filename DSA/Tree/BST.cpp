#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left,*right;
    node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
node *insert(node *root)
{
    cout<<"Enter value : ";
    int val;    cin>>val;
    node *temp = new node(val);
    if(root == nullptr)
    {
        return temp;
    }
    node *t = root;
    while(t)
    {
        if(val>t->data)
        {
            if(!t->right)
            {
                t->right = temp;
                return root;
            }
            t = t->right;
        }
        else if(val<t->data)
        {
            if(!t->left)
            {
                t->left = temp;
                return root;
            }
            t = t->left;
        }
    }
    return root;
}
void inorder(node *root)
{
    if(root == nullptr)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node *root)
{
    if(root == nullptr)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if(root == nullptr)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node *find(node *root, int key)
{
    node *t = root;
    while(t)
    {
        if(key>t->data)
        {
            t = t->right;
        }
        else if(key<t->data)
        {
            t = t->left;
        }
        else
        {
            return t;
        }
    }
    return nullptr;
}
node *del(node *root, int key)
{
    if(root == nullptr)
    return root;
    node *temp = root;
    node *t = nullptr;
    while(temp)
    {
        if(temp->data > key)
        {
            t = temp;
            temp = temp->left;
        }
        else if(temp->data < key)
        {
            t = temp;
            temp = temp->right;
        }
        else if(temp->data == key)
        {
            if(temp->right == nullptr and temp->left == nullptr)
            {
                if(temp == root)
                {
                    delete temp;
                    return nullptr;
                }
                else
                {
                    if(t->right == temp)
                    {
                        t->right = nullptr;
                        delete temp;
                    }
                    else
                    {
                        t->left = nullptr;
                        delete temp;
                    }
                }
            }
            else if(temp->right == nullptr and temp->left != nullptr)
            {
                if(temp == root)
                {
                    root = temp->left;
                }
                else
                {
                    if(t->right == temp)
                    {
                        t->right = temp->left;
                    }
                    else
                    {
                        t->left = temp->left;
                    }
                }
                delete temp;
            }
            else if(temp->right != nullptr and temp->left == nullptr)
            {
                if(temp == root)
                {
                    root = temp->right;
                }
                else
                {
                    if(t->right == temp)
                    {
                        t->right = temp->right;
                    }
                    else
                    {
                        t->left = temp->right;
                    }
                }
                delete temp;
            }
            else
            {
                
            }
            return root;
        }
    }
    return root;
}
int main()
{
    system("clear");
    node *root = nullptr;
    while(true)
    {
        cout<<"1.Insert\n2.View\n3.Find\n4.Delete\nEnter your choice : ";
        int a;  cin>>a;
        switch(a)
        {
            case 1:
            {
                root = insert(root);
                break;
            }
            case 2:
            {
                if(root == nullptr)
                cout<<"Empty!\n";
                else
                {
                    cout<<"Inorder : ";
                    inorder(root);
                    cout<<endl;
                    cout<<"Preorder : ";
                    preorder(root);
                    cout<<endl;
                    cout<<"Postorder : ";
                    postorder(root);
                    cout<<endl;
                }
                break;
            }
            case 3:
            {
                if(root == nullptr)
                cout<<"Empty!\n";
                else
                {
                    int key;    cout<<"Enter value : "; cin>>key;
                    node *temp = find(root, key);
                    if(temp)
                    {
                        cout<<"Required value : "<<temp->data<<endl;
                    }
                    else
                    {
                        cout<<"No such value!\n";
                    }
                }
                break;
            }
            case 4:
            {
                if(root == nullptr)
                cout<<"Empty!\n";
                else
                {
                    int key;    
                    cout<<"Enter value : ";
                    cin>>key;
                    node *temp = find(root, key);
                    if(temp)
                    {
                        root = del(root, key);
                    }
                    else
                    {
                        cout<<"No Such Value Exist!\n";
                    }
                }
                break;
            }
            default:
            {
                cout<<"Invalid Choice!\n";
                break;
            }
        }
        cout<<endl;
    }
}