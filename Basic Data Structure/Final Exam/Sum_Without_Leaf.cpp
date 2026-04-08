#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int Val;
    Node* left;
    Node* right;

    Node(int V)
    {
        Val = V;
        left = right = NULL;
    }
};
int sumleaf(Node* root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return root->Val + sumleaf(root->left) + sumleaf(root->right);
}

int main()
{
    vector<int> Arr;
    int Y;
    while (cin >> Y)
    {
        Arr.push_back(Y);
    }

    if (Arr.size() == 0 || Arr[0] == -1)
    {
        cout << 0 << endl;
        return 0;
    }
    Node* root = new Node(Arr[0]);
    queue<Node*> Q;
    Q.push(root);

    int i = 1;
    while (!Q.empty() && i < Arr.size())
    {
        Node* curr = Q.front();
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
    cout << sumleaf(root) << endl;
    return 0;
}