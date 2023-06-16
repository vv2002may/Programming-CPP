#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data, height;
    node *left, *right;
    node(int d)
    {
        data = d;
        height = 1;
        left = right = nullptr;
    }
};
node insert(node *p, int d)
{
    if (p == nullptr)
    {
        p = new node(d);
    }
}

void bfs() // breadth first search : print level elements with O(n)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << f->data << ", ";
            q.pop();

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
    }
}

int main()
{
    int a;
    node *root = nullptr;
    while (true)
    {
        cout << "1.Insert\n2.View\n3.Delete\n4.Exit\nEnter your choice : ";
        cin >> a;
        switch (a)
        {
        case 1:
        {
            int d;
            cout << "Enter value : ";
            cin >> d;
            root = insert(root, d);
            break;
        }
        case 2:
        {
            bfs();
            break;
        }
        case 4:
        {
            exit(1);
        }
        }
    }
    cout << endl;
}