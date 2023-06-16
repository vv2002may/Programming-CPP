#include<iostream>
#include<stack>
using namespace std;
class Node 
{
    public:
        int data;
        Node *rchild = nullptr , *lchild = nullptr , *root = nullptr;
        void insert(int d )
        {
            Node *t = new Node;
            t->data = d;
            if(root == nullptr)
            {
                root = t;
            }
            else
            {
                Node *p = root ,*r = nullptr;
                while(p!=nullptr)
                {
                    if(d<p->data)
                    {
                        r = p;
                        p = p->lchild;
                    }
                    else
                    {
                        r = p;
                        p = p->rchild;
                    }
                }
                if(d<r->data)
                {
                    r->lchild = t;
                }
                else 
                r->rchild = t;
            }
        }
        void view_preorder(Node *p)
        {
            stack<Node *>s;
            if(p)
            cout<<p->data<<" ";
            if(p->rchild)
            s.push(p->rchild);
            if(p->lchild)
            s.push(p->lchild);
            Node *t;
            while(!s.empty())
            {
                t = s.top();
                s.pop();
                cout<<t->data<<" ";
                if(t->rchild)
                s.push(t->rchild);
                if(t->lchild)
                s.push(t->lchild);
            }
        }
        void view_inorder(Node *p)
        {
            stack<Node *>s;
            Node *t = p;
            while(t)
            {
                s.push(t);
                t = t->lchild;
            }
            t = nullptr;
            while(!s.empty())
            {
                t = s.top();
                s.pop();
                cout<<t->data<<" ";
                if(t->rchild)
                {
                    s.push(t->rchild);
                    t=t->rchild;
                    while(t->lchild)
                    {
                        s.push(t->lchild);
                        t = t->lchild;
                    }
                }
            }
        }
        void view_postorder (Node *p)
        {
            stack<Node *> s1;
            stack<Node *> s2;
            Node *t = p;
            while(t)
            {
                s1.push(t);
                t = t->lchild;
            }
            t = nullptr;
            while(!s1.empty())
            {
                t = s1.top();
                s1.pop();
                if(t->rchild)
                {
                    s2.push(t);
                    s1.push(t->rchild);
                    t = t->rchild;
                    while(t->lchild)
                    {
                        s1.push(t->lchild);
                        t = t->lchild;
                    }
                }
                else
                {
                    cout<<t->data<<" ";
                    Node *s ;
                    while(!s2.empty())
                    {
                        s = s2.top();
                        s2.pop();
                        if(t == s->rchild)
                        {
                            cout<<s->data<<" ";
                            t = s;
                        }
                        else{
                            s2.push(s);
                            break;
                        }
                    }
                }
            }
        }
        void Delete( int del)
        {
            Node * p = root , *q = nullptr;
            while(p->data != del)
            {
                q=p;
                if(del >p->data)
                p = p->rchild;
                else 
                p = p->lchild;
            }
            while(p->rchild && p->lchild)
            {
                Node *t = p->lchild;
                q = p;
                while(t->rchild)
                {
                    q=t;
                    t=t->rchild;
                }
                p->data = t->data;
                p = t;
            }
            if(p->lchild == nullptr && p->rchild ==nullptr)
            {
                if(p == root )
                root = nullptr;
                else
                {
                    if(p == q->rchild)
                    q->rchild = nullptr;
                    else
                    q->lchild = nullptr;
                    delete p;
                }
            }
            else
            {
                if(p->rchild == nullptr)
                {
                    if(p == root)
                    {
                        root = root ->lchild;
                        delete p;
                    }
                    else
                    {
                        if(p == q->lchild)
                        q->lchild = p->lchild;
                        else
                        q->rchild = p->lchild;
                        delete p;
                    }
                }
                else 
                {
                    if(p == root )
                    {
                        root = root ->rchild;
                        delete p;
                    }
                    else
                    {
                        if(p == q->rchild)
                        q->rchild = p->rchild;
                        else 
                        q->lchild = p->rchild;
                        delete p;
                    }
                }
            }
        }
};
int main()
{
    Node n;
    while(true)
    {
        int a;
        cout<<"\n1.Insert\n2.View_preorder\n3.View_inorder\n4.View_postorder\n5.Delete\nEnter your choice : ";
        cin>>a;
        switch(a)
        {
            case 1:
            {
                int v;
                cout<<"\nEnter the value : ";cin>>v;
                n.insert(v);
                break;
            }
            case 2:
            {
                n.view_preorder(n.root);
                break;
            }
            case 3:
            {
                n.view_inorder(n.root);
                break;
            }
            case 4:
            {
                n.view_postorder(n.root);
                break;
            }
            case 5:
            {
                int d;
                cout<<"Enter the element you want to delete : ";
                cin>>d;
                n.Delete(d);
            }
        }
    }
    return 0;
}