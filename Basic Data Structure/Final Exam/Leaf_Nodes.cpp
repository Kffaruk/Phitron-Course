#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int V)
    {
        val = V;
        left = right = NULL;
    }
};

void leaf_nd(Node* root, vector<int>& leafs)
{
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL)
    {
        leafs.push_back(root->val);
        return;
    }

    leaf_nd(root->left, leafs);
    leaf_nd(root->right, leafs);
}

int main()
{
    vector<int> Arr;
    int X;
    while (cin >> X)
    {
        Arr.push_back(X);
    }

    if (Arr.empty() || Arr[0] == -1)
    {
        return 0;
    }
    Node* root = new Node(Arr[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < Arr.size())
    {
        Node* curr = q.front();
        q.pop();

        if (Arr[i] != -1)
        {
            curr->left = new Node(Arr[i]);
            q.push(curr->left);
        }
        i++;
        if (i < Arr.size() && Arr[i] != -1)
        {
            curr->right = new Node(Arr[i]);
            q.push(curr->right);
        }
        i++;
    }
    vector<int> leafs;
    leaf_nd(root, leafs);
    sort(leafs.begin(), leafs.end(), greater<int>());

    for (int V : leafs)
    {
        cout << V << " ";
    }
    return 0;
}