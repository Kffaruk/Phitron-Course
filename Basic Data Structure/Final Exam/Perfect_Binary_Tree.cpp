#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int V)
    {
        val = V;
        left = right = NULL;
    }
};

int M_Depth(Node *root)
{
    if (root == NULL)
        return 0;

    int depth = 0;
    queue<Node *> Q;
    Q.push(root);

    while (!Q.empty())
    {
        depth++;
        int level = Q.size();

        for (int i = 0; i < level; i++)
        {
            Node *curr = Q.front();
            Q.pop();

            if (curr->left != NULL)
                Q.push(curr->left);
            if (curr->right != NULL)
                Q.push(curr->right);
        }
    }
    return depth;
}
int countNode(Node *root)
{
    if (root == NULL)
        return 0;

    int count = 0;
    queue<Node *> Q;
    Q.push(root);

    while (!Q.empty())
    {
        Node *curr = Q.front();
        Q.pop();
        count++;

        if (curr->left != NULL)
            Q.push(curr->left);
        if (curr->right != NULL)
            Q.push(curr->right);
    }
    return count;
}

int main()
{
    vector<int> Arr;
    int X;
    while (cin >> X)
    {
        Arr.push_back(X);
    }

    if (Arr.size() == 0 || Arr[0] == -1)
    {
        cout << "NO" << endl;
        return 0;
    }
    Node *root = new Node(Arr[0]);
    queue<Node *> Q;
    Q.push(root);

    int i = 1;
    while (!Q.empty() && i < Arr.size())
    {
        Node *curr = Q.front();
        Q.pop();

        if (Arr[i] != -1)
        {
            curr->left = new Node(Arr[i]);
            Q.push(curr->left);
        }
        i++;

        if (i < Arr.size() && Arr[i] != -1)
        {
            curr->right = new Node(Arr[i]);
            Q.push(curr->right);
        }
        i++;
    }
    int depth = M_Depth(root);
    int total = countNode(root);
    int exp = pow(2, depth) - 1;

    if (total == exp)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
